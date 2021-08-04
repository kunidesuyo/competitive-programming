#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a[i].first = b;
        a[i].second = i;
    }

    sort(a, a+n);

    ll ans[n];
    for(int i = 0; i < n; i++) {
        ans[i] = k/n;
    }
    k %= n;

    for(int i = 0; i < k; i++) {
        ans[a[i].second]++;
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}