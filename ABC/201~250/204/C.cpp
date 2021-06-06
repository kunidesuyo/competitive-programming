#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> e(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        e[a].push_back(b);
    }
    
    /*for(int i = 0; i < n; i++) {
        cout << i << ": ";
        for(auto x : e[i]) {
            cout << x << " ";
        }
        cout << "\n";
    }*/

    int ans = 0;
    for(int s = 0; s < n; s++) {
        vector<bool> vis(n, false);
        vis[s] = true;
        queue<int> q;
        q.push(s);
        while(!q.empty()) {
            ans++;
            int i = q.front(); q.pop();
            for(auto j : e[i]) {
                if(vis[j] == false) {
                    vis[j] = true;
                    q.push(j);
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}