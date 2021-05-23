#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int t;
    cin >> t;
    int n[t], s[t], k[t];
    for(int i = 0; i < t; i++) cin >> n[i] >> s[i] >> k[i];


    for(int i = 0; i < t; i++) {
        int f = 0;
        for(int j = 0; j <= n[i];) {
            while(s[i] < n[i]) {
                s[i] += k[i];
                j++;
            }
            s[i] %= n[i];
            if(s[i] == 0) {
                cout << j << endl;
                f = 1;
                break;
            }
        }
        if(f == 0) {
            cout << -1 << endl;
        }
    }

    return 0;
}