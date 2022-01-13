#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

const int inf = INT_MAX / 2;

using namespace std;

struct edge {
    int s, t, d;
};

int main() {
    int v, e, r;
    cin >> v >> e >> r;
    edge g[e];
    for(int i = 0; i < e; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        g[i].s = s;
        g[i].t = t;
        g[i].d = d;

    }

    vector<int> cost(v, inf);
    cost[r] = 0;

    for(int i = 1; i <= v; i++) {
        bool negative = false;
        for(int j = 0; j < e; j++) {
            if(cost[g[j].s] != inf) {
                if(cost[g[j].t] > cost[g[j].s] + g[j].d) {
                    cost[g[j].t] = cost[g[j].s] + g[j].d;
                    if(i == v) negative = true;
                }
            }
            if(negative) break;
        }
        if(negative) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }


    for(int i = 0; i < v; i++) {
        if(cost[i] == inf) {
            cout << "INF" << endl;
            continue;
        }
        cout << cost[i] << endl;
    }
    return 0;
}