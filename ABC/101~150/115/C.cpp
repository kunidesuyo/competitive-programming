#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    sort(h, h+n);

    int ans = 1000000000;
    for(int i = 0; i+k-1 < n; i++) {
        int num = h[i+k-1] - h[i];
        ans = min(ans, num);
    }
    cout << ans << endl;

    return 0;
}