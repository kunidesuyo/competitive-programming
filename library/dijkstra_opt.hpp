#include <bits/stdc++.h>
#include <cmath>

using namespace std;

//---------------------------------------------

//input condition
const int MAX_V = 1000;
const int MAX_E = 1000;
const int MAX_D = 1000;
const int INF = MAX_E * MAX_D + 1;

struct edge {
    int to, cost;
};
typedef pair<int, int> P;

//input data
int V, E, s;
vector<edge> G[MAX_V];
// input start, end, cost
// edge E; E.to = end; E.cost = cost;
// G[start].push_back(E);

int d[MAX_V];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d + V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

