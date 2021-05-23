#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    pair<int, int> ba[n];
    int a_max = 0;
    int a_max_pair;
    for(int i = 0; i < n; i++) {
        cin >> ba[i].second >> ba[i].first;
        if(a_max < ba[i].second) {
            a_max = ba[i].second;
            a_max_pair = ba[i].first;
        } else if(a_max == ba[i].second) {
            if(a_max_pair > ba[i].first) {
                a_max_pair = ba[i].first;
            }
        }
    }

    sort(ba, ba+n, greater<pair<int, int>>());

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(ba[i].first <= a_max) break;
        if(h <= ba[i].first) {
            ans++;
            cout << ans << endl;
            return 0;
        } else {
            h -= ba[i].first;
            ans++;
        }
    }

    // iranai
    /*for(int i = 0; i < n; i++) {
        if(a_max > ba[i].first) break;
        bool con = true;
        if(a_max == ba[i].second && a_max_pair == ba[i].first) {
            if(i+1 < n) {
                if(ba[i] == ba[i+1]) {
                    h -= ba[i].first;
                    ans++;
                    con = true;
                } else {
                    h -= ba[i].first;
                    ans++;
                    con = false;
                }
            } else {
                h -= ba[i].first;
                ans++;
                con = false;
            }
        } else {
            if(h <= ba[i].first) {
                ans++;
                cout << ans << endl;
                return 0;
            } else {
                h -= ba[i].first;
                ans++;
            }
        }
        if(con) {
            continue;
        } else {
            break;
        }
    }

    if(h <= 0) {
        cout << ans << endl;
        return 0;
    }*/

    int num = h / a_max;
    if(h % a_max != 0) num++;
    cout << ans + num << endl;
    

    return 0;
}