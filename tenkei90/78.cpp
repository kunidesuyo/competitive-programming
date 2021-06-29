#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> g(n+1, 0);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if(a > b) {
            g[a]++;
        } else if (a < b) {
            g[b]++;
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(g[i] == 1) {
            ans++;
        }
    }

    cout << ans << endl;
    

    return 0;
}