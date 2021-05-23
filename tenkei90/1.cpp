#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll n, l, k;
ll a[1000000];

bool solve(ll m) {
    ll cnt = 0, pre = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] - pre >= m && l - a[i] >= m) {
            cnt++;
            pre = a[i];
        }
    }
    if(cnt >= k) return true;
    return false;
}

int main() {
    cin >> n >> l;
    cin >> k;
    for(int i = 0; i < n; i++) cin >> a[i];

    ll left = -1, right = l+1;
    while(right - left > 1) {
        ll mid = (left + right) / 2;
        if(solve(mid) == false) right = mid;
        else left = mid;
    }

    cout << left << endl;

    return 0;
}