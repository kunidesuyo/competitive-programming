#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int s[m], c[m];
    for(int i = 0; i < m; i++) cin >> s[i] >> c[i];

    int a[n];
    for(int i = 0; i < n; i++) a[i] = -1;

    bool ex = true;

    for(int i = 0; i < m; i++) {
        if(a[s[i] - 1] == -1) {
            a[s[i] - 1] = c[i];
        } else if(a[s[i] - 1] != c[i]) {
            ex = false;
            break;
        }
    }

    if(a[0] == 0 && n != 1) ex = false;

    for(int i = 0; i < n; i++) {
        if(i == 0 && n != 1) {
            if(a[i] == -1) a[i] = 1;
        } else {
            if(a[i] == -1) a[i] = 0;
        }
    }



    if(ex) {
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += pow(10,n - i - 1) * a[i];
        }
        cout << ans << endl;

    } else {
        cout << -1 << endl;
    }


    return 0;
}