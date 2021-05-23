#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int l[q], r[q];
    for(int i = 0; i < q; i++) {
        int ll, rr;
        cin >> ll >> rr;
        l[i] = ll - 1;
        r[i] = rr - 1;
    }

    int t[n];
    int now = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            t[i] = 0;
        } else {
            if(s[i] == 'C' && s[i-1] == 'A') {
                now++;
            }
            t[i] = now;
        }
    }

    /*for(int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;*/

    for(int i = 0; i < q; i++) {
        cout << t[r[i]] - t[l[i]] << endl;
    }
    

    return 0;
}