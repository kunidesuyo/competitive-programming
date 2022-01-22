#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> g[n];
    pair<int, int> e[m];
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        e[i].first = a;
        e[i].second = b;
    }

    int ans = 0;

    for(int i = 0; i < m; i++) {
        int s, t;
        s = e[i].first;
        t = e[i].second;
        vector<bool> v(n, false);
        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int now = q.front(); q.pop();
            if(v[now] == true) continue;
            v[now] = true;
            for(auto x : g[now]) {
                if(!((x==s&&now==t)||(x==t&&now==s))) {
                    if(v[x] == false) {
                        q.push(x);
                    }
                }
            }
        }
        bool renketu = true;
        for(int i = 0; i < n; i++) {
            if(v[i] == false) renketu = false;
        }
        if(renketu == false) ans++;
    }

    cout << ans << endl;


    return 0;
}