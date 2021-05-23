#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int l[m], r[m];
    for(int i = 0; i < m; i++) {
        cin >> l[i] >> r[i];
    }

    int upper, lower;

    for(int i = 0; i < m; i++) {
        if(i == 0) {
            lower = l[i];
            upper = r[i];
        }
        if((lower <= l[i] && upper >= l[i])|| (lower <= r[i] && upper >= r[i])) {
            lower = max(lower, l[i]);
            upper = min(upper, r[i]);
        } else if(lower > r[i] || upper < l[i]) {
            cout << 0 << endl;
            return 0;
        }
    }
    int ans = upper - lower + 1;
    
    cout << ans << endl;
    


    return 0;
}