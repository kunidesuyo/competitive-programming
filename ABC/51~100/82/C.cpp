#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    int ans = 0;

    for(auto p: a) {
        if(p.second >= p.first) {
            ans += min(p.second, p.second-p.first);
        } else {
            ans += p.second;
        }
    }

    cout << ans << endl;

    return 0;
}