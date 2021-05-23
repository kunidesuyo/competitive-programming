#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int n;
vector<int> G[100009];
vector<int> color(100009, 0);

void dfs(int pos, int c) {
    color[pos] = c;
    for(auto i : G[pos]) {
        if(color[i] >= 1) continue;
        dfs(i, 3 - c);
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(1,1);

    vector<int> g1, g2;
    for(int i = 1; i <= n; i++) {
        if(color[i] == 1) g1.push_back(i);
        if(color[i] == 2) g2.push_back(i);
    }

    if(g1.size() > g2.size()) {
        for(int i = 0; i < n/2; i++) {
            cout << g1[i] << " ";
        }
        cout << "\n";
    } else {
        for(int i = 0; i < n/2; i++) {
            cout << g2[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}