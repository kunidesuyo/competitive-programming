#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

struct edge{
    int to, cost;
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<edge> G[n];
    vector<int> ans;

    for(int i = 0; i < k; i++) {
        int type;
        cin >> type;
        if(type == 1) {
            int c, d, e;
            cin >> c >> d >> e;
            c--; d--;
            edge x;
            x.to = d;
            x.cost = e;
            edge y;
            y.to = c;
            y.cost = e;
            G[c].push_back(x);
            G[d].push_back(y);
        } else if(type == 0) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            typedef pair<int, int> P;
            priority_queue<P, vector<P>, greater<P> > que;
            que.push(make_pair(0, a));

            vector<int> sp(n, inf);
            sp[a] = 0;
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
            ans.push_back(sp[b]);
        }

    }


    for(auto x : ans) {
        if(x == inf) cout << -1 << endl;
        else cout << x << endl;
    }

    return 0;
}