#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

const int inf = INT_MAX / 2;

using namespace std;

struct edge {
    int to, d;
};

int main() {
    int v, e, r;
    cin >> v >> e >> r;
    vector<edge> ed[v];
    for(int i = 0; i < e; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        edge x;
        x.to = t; x.d = d;
        ed[s].push_back(x);
    }

    /*for(int i = 0; i < v; i++) {
        cout << "i=" << i << endl;
        for(auto x : ed[i]) {
            cout << x.to << " " << x.d << endl;
        }
    }*/

    int cost[v];
    for(int i = 0; i < v; i++) cost[i] = inf;
    cost[r] = 0;

    typedef pair<int, int> p;
    priority_queue<p, vector<p>, greater<p> > q;
    q.push(make_pair(0, r));
    

    while(!q.empty()) {
        p x = q.top(); q.pop();
        int num = x.second;
        if(x.first > cost[num]) continue;
        for(int i = 0; i < (int)ed[num].size(); i++) {
            edge now = ed[num][i];
            if(cost[now.to] > cost[num] + now.d) {
                cost[now.to] = cost[num] + now.d;
                q.push(make_pair(cost[now.to], now.to));
            }
        }
    }

    for(int i = 0; i < v; i++) {
        if(cost[i] == inf) cout << "INF" << endl;
        else cout << cost[i] << endl;
    }

    return 0;
}