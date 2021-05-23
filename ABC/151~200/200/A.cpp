#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n / 100 + 1;
    if(n % 100 == 0) ans--;

    cout << ans << endl;

    return 0;
}