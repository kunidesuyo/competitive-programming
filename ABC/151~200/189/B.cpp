#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int v[n], p[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i] >> p[i];
    }

    int ans = -1;
    int alc = 0;
    

    for(int i = 0; i < n; i++) {
        alc += v[i] * p[i];
        if(alc > x * 100) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}