#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    int q1, q2, q3;
    int ans=0;
    for(int i = 0; i < n - 2; i++) {
        q1 = p[i];
        q2 = p[i + 1];
        q3 = p[i + 2];
        if((q2 > q1 && q2 < q3) || (q2 > q3 && q2 < q1)) ans++;
    }
    cout << ans << endl;

    return 0;
}