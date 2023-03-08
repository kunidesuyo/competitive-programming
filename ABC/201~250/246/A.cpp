#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int xy[3][2];
    for(int i = 0; i < 3; i++) {
        cin >> xy[i][0] >> xy[i][1];
    }

    int ix, iy;
    if(xy[0][0] == xy[1][0]) {
        ix = 2;
    } else if (xy[0][0] == xy[2][0]) {
        ix = 1;
    } else {
        ix = 0;
    }
    if(xy[0][1] == xy[1][1]) {
        iy = 2;
    } else if (xy[0][1] == xy[2][1]) {
        iy = 1;
    } else {
        iy = 0;
    }

    cout << xy[ix][0] << " " << xy[iy][1] << endl;
    

    return 0;
}