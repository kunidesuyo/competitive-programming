#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], l[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> l[i];
    }

    pair<int, int> r[n];

    for(int i = 0; i < n; i++) {
        r[i] = make_pair(x[i]+l[i], x[i]-l[i]);
    }

    sort(r,r+n);

    int ans = 1;
    int cur = r[0].first;

    for(int i = 1; i < n; i++) {
        if(cur <= r[i].second) {
            ans++;
            cur = r[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}