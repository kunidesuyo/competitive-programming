#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int N,D,H;
    cin >> N >> D >> H;
    int d[N], h[N];
    for(int i = 0; i < N; i++) cin >> d[i] >> h[i];

    double ans = 0;

    for(int i = 0; i < N; i++)  {
        double a = (double)(H - h[i]) / (D - d[i]);
        ans = max(ans, -a * d[i] + h[i]);
    }

    cout << setprecision(10);

    cout << ans << endl;

    return 0;
}