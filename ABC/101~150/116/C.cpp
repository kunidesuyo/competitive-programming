#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    int ans = 0;

    int i;
    while(true) {
        i=n;
        for(int j = 0; j < n; j++) {
            if(h[j] != 0) {
                i = j;
                break;
            }
        }
        //cout << i << endl;
        if(i == n) break;

        int mini = 1000;
        int l, r;
        bool block = true;
        l = i;

        for(int j = i; j < n; j++) {
            if(h[j] == 0) {
                r = j - 1;
                break;
            }
            if(j == n-1 && h[j] != 0) {
                r = j;
                mini = min(mini, h[j]);
                break;
            }
            mini = min(mini, h[j]);
        }
        //cout << l << " " << r << " " << mini << endl;
        for(int j = l; j <= r; j++) {
            h[j] -= mini;
        }
        /*for(int i = 0; i < n; i++) {
            cout << h[i] << " ";
        }*/
        
        ans += mini;
        //cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}