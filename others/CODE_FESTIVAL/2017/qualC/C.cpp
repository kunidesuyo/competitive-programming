#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    string t;
    for(int i = 0; i < n; i++) {
        if(s[i] != 'x') {
            t.push_back(s[i]);
        }
    }

    string tr = t;
    reverse(tr.begin(), tr.end());

    if(t != tr) {
        cout << -1 << endl;
        return 0;
    }

    int l = 0;
    int r = n-1;
    int ans = 0;

    while(l < r) {
        if(s[l] == 'x') {
            if(s[r] == 'x') {
                l++;
                r--;
            } else {
                ans++;
                l++;
            }
        } else {
            if(s[r] == 'x') {
                ans++;
                r--;
            } else {
                l++;
                r--;
            }
        }
    }

    cout << ans << endl;



    return 0;
}