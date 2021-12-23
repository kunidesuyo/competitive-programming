#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<queue<int>> a(m);
    vector<vector<int>> cnt(n);

    for(int i = 0; i < m; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int aa;
            cin >> aa;
            a[i].push(aa-1);
        }
        cnt[a[i].front()].push_back(i);
    }

    queue<int> q;
    for(int i = 0; i < n; i++) {
        if(cnt[i].size() == 2) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int now = q.front(); q.pop();
        for(auto x : cnt[now]) {
            a[x].pop();
            if(!a[x].empty()) {
                cnt[a[x].front()].push_back(x);
                if(cnt[a[x].front()].size() == 2) {
                    q.push(a[x].front());
                }
            }
        }
    }

    for(auto x : a) {
        if(!x.empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;



    return 0;
}