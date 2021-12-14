#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += t[i];
    }
    //cout << ans << endl;
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int p, x;
        cin >> p >> x;
        p--;
        cout << ans - (t[p] - x) << endl;
    }

    

    

    return 0;
}