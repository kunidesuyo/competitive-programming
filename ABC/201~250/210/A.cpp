#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int ans =0;
    for(int i = 1; i <= n; i++) {
        if(i <= a) {
            ans += x;
        } else {
            ans += y;
        }
    }

    cout << ans << endl;

    return 0;
}