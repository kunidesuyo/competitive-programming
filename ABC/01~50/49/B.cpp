#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string c[h];
    for(int i = 0; i < h; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << c[i][j];
        }
        cout << "\n";
        for(int j = 0; j < w; j++) {
            cout << c[i][j];
        }
        cout << "\n";
    }

    return 0;
}