#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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

    vector<int> sumyoko(h);
    vector<int> sumtate(w);

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            sumyoko[i] += a[i][j];
        }
    }

    for(int i = 0; i < w; i++) {
        for(int j = 0; j < h; j++) {
            sumtate[i] += a[j][i];
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << sumyoko[i] + sumtate[j] - a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}