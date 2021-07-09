#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = n;
    int num = 0;

    int xx[n][n], yy[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            xx[i][j] = x[i] - x[j];
            yy[i][j] = y[i] - y[j];
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            int now = 1;
            for(int k = 0; k < n; k++) {
                for(int l = 0; l < n; l++) {
                    if(k == l || ((i == k) && (j == l))) continue;
                    if(xx[i][j] == xx[k][l] && yy[i][j] == yy[k][l]) now++;
                }
            }
            num = max(num, now);
        }
    }

    cout << n - num << endl;

    return 0;
}