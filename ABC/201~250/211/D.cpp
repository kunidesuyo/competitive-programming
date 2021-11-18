#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

using Graph = vector<vector<int>>;

int main() {
    int n, m;
    cin >> n >> m;

    Graph g(n);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(n, -1);
    vector<int> cnt(n, -1);
    queue<int> que;

    dist[0] = 0;
    cnt[0] = 1;
    que.push(0);

    int mod = 1000000000 + 7;

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for(int nv : g[v]) {
            if(dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                cnt[nv] = cnt[v];
                que.push(nv);
            } else {
                if(dist[nv] == dist[v]+1) {
                    cnt[nv] += cnt[v];
                    cnt[nv] %= mod;
                }
            }
            
        }
    }

    if(cnt[n-1] == -1) {
        cout << 0 << endl;
    } else {
        cout << cnt[n-1] << endl;
    }    

    return 0;
}
