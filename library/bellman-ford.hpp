#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
//const ll INF = __LONG_LONG_MAX__;
const int INF = 100000000;

using namespace std;

#define MAX_E 1000
#define MAX_V 1000

struct edge {
    int from, to, cost;
};

edge es[MAX_E];
int d[MAX_V];
int V, E;

void shortest_path(int s) {
    for (int i = 0; i < V; i++) d[i] = INF;
    d[s] = 0;
    while (true) {
        bool update = false;
        for (int i = 0; i < E; i++) {
            edge e = es[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) break;
    }
}

bool find_negative_loop() {
    memset(d, 0, sizeof(d));

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < E; j++) {
            edge e = es[j];
            if(d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if (i == V - 1) return true;
            }
        }
    }
}

int main() {
    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }

    shortest_path(0);
    

    return 0;
}