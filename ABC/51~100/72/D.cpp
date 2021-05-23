#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    bool a[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        if(p[i] == i+1) {
            a[i] = false;
        } else {
            a[i] = true;
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(!a[i]) {
            a[i] = true;
            a[i+1] = true;
            ans++;
        }
        if(i == n-1 && !a[i]) {
            a[i] = true;
            a[i-1] = true;
            ans++;
        }
    }

    cout << ans << endl;



    return 0;
}