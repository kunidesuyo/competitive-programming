#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int h, w;
    int r, c;
    cin >> h >> w;
    cin >> r >> c;

    int ans = 4;
    if(r == 1) ans--;
    if(r == h) ans--;
    if(c==1) ans--;
    if(c==w) ans--;

    cout << ans << endl;

    return 0;
}