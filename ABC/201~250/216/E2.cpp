#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 2 * 1e9 + 1;
    ll m;
    while(r - l > 1) {
        m = (l + r) / 2;
        ll num = 0;
        for(int i = 0; i < n; i++) {
            num += max(0LL, a[i] - m + 1);
        }
        //cout << num << endl;
        if(num < k) {
            r = m;
        } else {
            l = m;
        }
    }
    
    int max = r;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < max) continue;
        int num = a[i] - max + 1;
        ans += (a[i] + max) * num / 2;
        k -= num;
    }
    ans += k * (max - 1);

    cout << ans << endl;


    return 0;
}