#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n], l[n], r[n];
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> l[i] >> r[i];
    }

    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            bool x = false;
            if( (l[i] < l[j] && l[j] < r[i]) || (l[i] < r[j] && r[j] < r[i]) ) {
                x = true;
            }
            if(t[i] == 1) {
                if(l[i] == l[j]) {
                    x = true;
                }
                if(l[i] == r[j]) {
                    if(t[j] == 1 || t[j] == 3) x = true;
                }
                if(r[i] == l[j]) {
                    if(t[j] == 1 || t[j] == 2) x = true;
                }
                if(r[i] == r[j]) {
                    x = true;
                }
            } else if(t[i] == 2) {
                if(l[i] == l[j]) {
                    x = true;
                }
                if(l[i] == r[j]) {
                    if(t[j] == 1 || t[j] == 3) x = true;
                }
                //if(r[i] == l[j])
                if(r[i] == r[j]) x = true;
            } else if(t[i] == 3) {
                if(l[i] == l[j]) x = true;
                //if(l[i] == r[j])
                if(r[i] == l[j]) {
                    if(t[j] == 1 || t[j] == 2) x = true;
                }
                if(r[i] == r[j]) {
                    x = true;
                }
            } else if(t[i] == 4) {
                if(l[i] == l[j]) x = true;
                if(r[i] == r[j]) x = true;
            }
            if( (l[j] < l[i] && l[i] < r[j]) || (l[j] < r[i] && r[i] < r[j]) ) {
                x = true;
            }
            if(t[j] == 1) {
                if(l[j] == l[i]) {
                    x = true;
                }
                if(l[j] == r[i]) {
                    if(t[i] == 1 || t[i] == 3) x = true;
                }
                if(r[j] == l[i]) {
                    if(t[i] == 1 || t[i] == 2) x = true;
                }
                if(r[j] == r[i]) {
                    x = true;
                }
            } else if(t[j] == 2) {
                if(l[j] == l[i]) {
                    x = true;
                }
                if(l[j] == r[i]) {
                    if(t[i] == 1 || t[i] == 3) x = true;
                }
                //if(r[i] == l[j])
                if(r[j] == r[i]) x = true;
            } else if(t[j] == 3) {
                if(l[j] == l[i]) x = true;
                //if(l[i] == r[j])
                if(r[j] == l[i]) {
                    if(t[i] == 1 || t[i] == 2) x = true;
                }
                if(r[j] == r[i]) {
                    x = true;
                }
            } else if(t[j] == 4) {
                if(l[j] == l[i]) x = true;
                if(r[j] == r[i]) x = true;
            }
            if(x) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}