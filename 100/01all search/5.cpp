// ABC95C
#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 0;
    int mini = min(x, y);
    if(2 * c < a + b) {
        ans += 2 * c * mini;
    } else {
        ans += (a+b) * mini;
    }
    x -= mini;
    y -= mini;

    if(x > 0) {
        ans += min(x * a, 2 * c * x);
    }


    if(y > 0) {
        ans += min(y * b, 2 * c * y);
    }

    cout << ans << endl;
    return 0;
}