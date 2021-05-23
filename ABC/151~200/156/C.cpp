#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    int ans = 1000000000;
    

    for(int i = 1; i <= 100; i++) {
        int a = 0;
        for(int j = 0; j < n; j++) {
            a += pow(x[j] - i, 2);
        }
        ans = min(a, ans);
    }

    cout << ans << endl;

    return 0;
}