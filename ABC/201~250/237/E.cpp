#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

typedef pair<ll, ll> P;

int main() {
    ll n,m;
    cin >> n >> m;
    ll h[n];
    for(ll i = 0; i < n; i++) cin >> h[i];
    vector<ll> g[n];
    for(ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    priority_queue<P, vector<P>, greater<P>> q;
    vector<ll> dist(n, INF);
    dist[0] = 0;
    q.emplace(0,0);

    while(!q.empty()) {
        P dv = q.top(); q.pop();
        ll d = dv.first;
        ll v = dv.second;
        if(dist[v] != d) continue;
        for(auto u : g[v]) {
            ll cost = max(0LL, h[u]-h[v]);
            ll nd = d + cost;
            if(nd >= dist[u]) continue;
            dist[u] = nd;
            q.emplace(nd, u);
        }
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ll now = h[0] - h[i] - dist[i];
        ans = max(ans, now);
    }
    cout << ans << endl;
    /*for(auto x : g) {
        for(auto y : x) {
            cout << y << " ";
        }
        cout << "\n";
    }*/



    /*queue<ll> q;
    vector<ll> fan(n, -inf);
    q.push(0);
    fan[0] = 0;
    
    while(!q.empty()) {
        ll now = q.front();
        q.pop();
        for(auto next : g[now]) {
            ll next_f = fan[now];
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

    ll ans = -inf;
    for(auto x:fan) {
        ans = max(ans, x);
    }
    cout << ans << endl;*/

    return 0;
}