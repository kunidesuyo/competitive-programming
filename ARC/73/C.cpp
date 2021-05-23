#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int time[n];
    for(int i = 0; i < n; i++) cin >> time[i];

    int ans = 0;
    for(int i = 1; i < n; i++) {
        int hoge = time[i-1] + t;
        if(hoge > time[i]) {
            ans += time[i] - time[i-1];
        } else {
            ans += t;
        }
    }

    ans += t;

    cout << ans << endl;

    return 0;
}