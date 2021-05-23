#include <bits/stdc++.h>
#include <cmath>

#include<UnionFind.hpp>

using namespace std;

//must include union-find

#define MAX_E 1000

struct edge {
    int u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;

int kruskal() {
    sort(es, es + E, comp);
    UnionFind uf(V);
    int res = 0;
    for(int i = 0; i < E; i++) {
        edge e = es[i];
        if(!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.cost;
        }
    }

    return res;

}