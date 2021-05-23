#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string a[h];
    for(int i = 0; i < h; i++) cin >> a[i];

    int count = 0;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(a[i][j] == '#') count++;
        }
    }

    if(count == h+w-1) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
    

    return 0;
}