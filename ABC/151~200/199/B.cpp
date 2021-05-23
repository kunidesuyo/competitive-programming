#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

   int ans = 0;

    for(int i = 1; i <= 1000; i++) {
        bool v = true;
        for(int j = 0; j < n; j++) {
            if(!(a[j] <= i && b[j] >= i)) v = false;
        }
        if(v) ans++;
    }

    cout << ans << endl;

    return 0;
}