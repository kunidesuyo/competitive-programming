#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];
    vector<int> g[n];
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    /*for(auto x : g) {
        for(auto y : x) {
            cout << y << " ";
        }
        cout << "\n";
    }*/

    queue<int> q;
    vector<int> fan(n, -inf);
    q.push(0);
    fan[0] = 0;
    
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(auto next : g[now]) {
            int next_f = fan[now];
            if(h[now] < h[next]) {
                next_f -= 2 * abs(h[now] - h[next]);
            } else if(h[now] > h[next]) {
                next_f += abs(h[now] - h[next]);
            }
            if(next_f > fan[next]) {
                fan[next] = next_f;
                q.push(next);
            }
        }
    }

    int ans = -inf;
    for(auto x:fan) {
        ans = max(ans, x);
    }
    cout << ans << endl;

    return 0;
}