#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    int ans = h[0];
    for(int i = 1; i < n; i++) {
        if(ans < h[i]) {
            ans = h[i];
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}