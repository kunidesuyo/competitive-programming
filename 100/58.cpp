#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;


using namespace std;

struct edge{
    ll to, cost;
};

int main() {
    ll n, m, k, s;
    cin >> n >> m >> k >> s;
    ll p, q;
    cin >> p >> q;
    ll c[k];
    for(ll i = 0; i < k; i++) {
        cin >> c[i];
        c[i]--;
    }
    vector<ll> e[n];
    for(ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    
    //危険な町を幅有線探索で調べる

    vector<bool> zomb(n, false);
    for(ll i = 0; i < k; i++) {
        ll start = c[i];
        vector<ll> d(n, -1);
        d[start] = 0;
        queue<ll> q;
        q.push(start);
        while(!q.empty()) {
            ll now = q.front(); q.pop();
            ll now_cost = d[now];
            if(d[now] == s) continue;
            for(auto to : e[now]) {
                if(d[to] == -1) {
                    d[to] = now_cost + 1;
                    q.push(to);
                    zomb[to] = true;
                }
            }
        }
    }

    /*for(ll i = 0; i < n; i++) {
        if(zomb[i]) cout << i << endl;
    }*/

    //ゾンビに支配されている町につながっている道路を削除
    //行先の宿の値段で辺の重みを決める

    vector<edge> G[n];

    for(ll i = 0; i < n; i++) {
        for(auto x: e[i]) {
            //(i,x)
            bool del = false;
            for(ll j = 0; j < k; j++) {
                if(x == c[j] || i == c[j]) {
                    del = true;
                }
                if(del) break;
            }
            if(del) continue;
            edge now;
            now.to = x;
            if(zomb[x]) {
                now.cost = q;
            } else {
                now.cost = p;
            }
            if(x == n-1) now.cost = 0;
            G[i].push_back(now);
        }
    }

    //ダイクストラ

    typedef pair<ll, ll> P;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(make_pair(0, 0));

    vector<ll> sp(n, INF);
    sp[0] = 0;

    while(!que.empty()) {
        P now = que.top(); que.pop();
        if(sp[now.second] < now.first) continue;
        ll start = now.second;
        ll now_cost = now.first;
        for(ll i = 0; i < (ll)G[start].size(); i++) {
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