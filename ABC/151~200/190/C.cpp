#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    int c[k], d[k];
    for(int i = 0; i < k; i++) {
        cin >> c[i] >> d[i];
    }


    int ans = 0;

    for(int bit = 0; bit < (1<<k); bit++) {
        vector<int> sara(n);
        for(int i = 0; i < k; i++) {
            if(bit & (1<<i)) {
                sara[c[i] - 1] = 1;
            } else {
                sara[d[i] - 1] = 1;
            }
        }
        int num = 0;
        for(int i = 0; i < m; i++) {
            if(sara[a[i] - 1] == 1&& sara[b[i] - 1] == 1) num++;
        }
        ans = max(ans, num);
        
    }

    cout << ans << endl;

    return 0;
}