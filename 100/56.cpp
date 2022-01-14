#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

const int inf = INT_MAX / 2;

using namespace std;

struct edge{
    int to, cost;
};


int main() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<edge> G[V];
    for(int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        edge e;
        e.to = t; e.cost = d;
        G[s].push_back(e);
    }

    typedef pair<int, int> P;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(make_pair(0, r));

    vector<int> sp(V, inf);
    sp[r] = 0;

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

    for(int i = 0; i < V; i++) {
        if(sp[i] == inf) cout << "INF" << endl;
        else cout << sp[i] << endl;
    }



    return 0;
}