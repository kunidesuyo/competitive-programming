#include <bits/stdc++.h>
#include <cmath>

using namespace std;

//mukou graph?
const long long INF = 1LL<<60;
const int inf = INT_MAX / 2;

#define MAX_V 1000

int d[MAX_V][MAX_V]; 
//d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF,ただしd[i][i]=0とする)
int V;
//頂点数

void warshall_floyd() {
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(dp[i][k] == inf || dp[k][j] == inf) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main() {
    

    return 0;
}