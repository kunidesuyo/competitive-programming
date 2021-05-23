#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> yp[n+1];
    int y[m], p[m];
    for(int i = 0; i < m; i++) {
        cin >> p[i] >> y[i];
        yp[p[i]].push_back(y[i]);
    }

    for(int i = 1; i <= n; i++) {
        sort(yp[i].begin(), yp[i].end());
    }

    for(int i = 0; i < m; i++) {
        printf("%06d", p[i]);
        int num = lower_bound(yp[p[i]].begin(), yp[p[i]].end(), y[i]) - yp[p[i]].begin() + 1;
        printf("%06d\n", num);
    }


    return 0;
}