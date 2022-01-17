#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

struct edge {
    int to, cost;
};

int main() {
    int n, k;
    cin >> n >> k;
    int c[n], r[n];
    for(int i = 0; i < n; i++) {
        cin >> c[i] >> r[i];
    }
    vector<int> g[n];
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<edge> G[n];

    for(int i = 0; i < n; i++) {
        queue<int> q;
        q.push(i);
        vector<int> d(n, -1);
        d[i] = 0;
        while(!q.empty()) {
            int now = q.front(); q.pop();
            int now_d = d[now];
            if(d[now] == r[i]) continue;
            for(int j = 0; j < (int)g[now].size(); j++) {
                int next = g[now][j];
                if(d[next] == -1) {
                    d[next] = now_d + 1;
                    q.push(next);
                    edge e;
                    e.to = next;
                    e.cost = c[i];
                    G[i].push_back(e);
                }
            }
        }    
    }

    typedef pair<int, int> P;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(make_pair(0, 0));

    vector<int> sp(n, inf);
    sp[0] = 0;

    while(!que.empty()) {
        P now = que.top(); que.pop();
        if(sp[now.second] < now.first) continue;
        int start = now.second;
        int now_cost = now.first;
        for(int i = 0; i < (int)G[start].size(); i++) {
            edge e = G[start][i];
            if(sp[e.to] > now_cost + e.cost) {
                sp[e.to] = now_cost + e.cost;
                que.push(make_pair(sp[e.to], e.to));
            }
        }
    }

    cout << sp[n-1] << endl;


    return 0;
}