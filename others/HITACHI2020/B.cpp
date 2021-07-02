#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    int aa[a], bb[b];
    for(int i = 0; i < a; i++) cin >> aa[i];
    for(int i = 0; i < b; i++) cin >> bb[i];
    int x[m], y[m], c[m];
    for(int i = 0; i < m; i++) {
        cin >> x[i] >> y[i] >> c[i];
        x[i]--;
        y[i]--;
    }
    int ans = 1000000;
    for(int i = 0; i < m; i++) {
        int num = aa[x[i]] + bb[y[i]] - c[i];
        ans = min(ans, num);
    }
    sort(aa, aa+a);
    sort(bb, bb+b);
    int num = aa[0] + bb[0];
    ans = min(ans, num);
    cout << ans << endl;

    return 0;
}