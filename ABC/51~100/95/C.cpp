#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    cin >> x >> y;

    int ans = 0;
    ans += min(a+b, 2*c) * min(x, y);
    if(x < y) {
        ans += (max(x,y) - min(x,y)) * min(b, 2*c);
    } else {
        ans += (max(x,y) - min(x,y)) * min(a, 2*c);
    }
    cout << ans << endl;

    return 0;
}