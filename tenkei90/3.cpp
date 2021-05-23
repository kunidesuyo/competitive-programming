#include <bits/stdc++.h>
#include <cmath>

using ll = long long;

using namespace std;


const int n_max = 100000;
int n;
int a[n_max], b[n_max];

const int INF = (1 << 29);
vector<int> G[n_max];
int dist[n_max];

void getdist(int start) {
    for(int i = 0; i < n; i++) dist[i] = INF;

    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while(!q.empty()) {
        int pos = q.front(); q.pop();
        for(int to : G[pos]) {
            if(dist[to] == INF) {
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n-1; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    getdist(0);

    int maxn1 = -1, maxid1 = -1;
    for(int i = 0; i < n; i++) {
        //cout << i << " " << dist[i] << endl;
        if(maxn1 < dist[i]) {
            maxn1 = dist[i];
            maxid1 = i;
        }
    }

    //cout << maxid1 << " " << maxn1 << endl;

    getdist(maxid1);
    int maxn2 = -1;
    for(int i = 0; i < n; i++) {
        maxn2 = max(maxn2, dist[i]);
    }

    cout << maxn2 + 1 << endl;


    return 0;
}