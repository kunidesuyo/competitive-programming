#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int biggest = -10000;
    int smallest = 100000;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        biggest = max(biggest, a[i]);
        smallest = min(smallest, a[i]);
    }

    int ans = 1000000000;

    for(int i = smallest; i <= biggest; i++) {
        int val = 0;
        for(int j = 0; j < n; j++) {
            val += (a[j] - i) * (a[j] - i);
        }
        ans = min(ans, val);
    }

    cout << ans << endl;

    return 0;
}