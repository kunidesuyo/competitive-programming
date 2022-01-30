#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    int b[w][h];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < h; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}