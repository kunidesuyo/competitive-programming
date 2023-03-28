#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

vector<int> g[300000];

int main() {
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    

    vector<int> c(n, 0);

    for(int i = 0; i < q; i++) {
        int p, x;
        cin >> p >> x;
        p--;
        c[p] += x;
    }

    /*cout << "\n";
    for(int i = 0; i < n; i++) {
        cout << "-----------------" << endl;
        cout << i << ": ";
        for(int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << "-----------------" << endl;
    }*/


    vector<int> ans(n, 0);
    vector<bool> visited(n, false);

    stack<pair<int, int>> s;
    s.push(make_pair(0, 0));

    while(!s.empty()) {
        pair<int, int> now = s.top();
        s.pop();
        visited[now.first] = true;
        ans[now.first] = now.second + c[now.first];
        for(int i = 0; i < g[now.first].size(); i++) {
            pair<int, int> next;
            next.first = g[now.first][i];
            next.second = ans[now.first];
            if(visited[next.first] == true) continue;
            s.push(next);
        }
    }

    for(auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";



    return 0;
}