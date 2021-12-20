#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll s[n];
    for(ll i = 0; i < n; i++) cin >> s[i];

    ll t[n];
    for(ll i = 0; i < n; i++) cin >> t[i];

    vector<ll> ans(n, -1);

    for(ll i = 0; i < 2*n; i++) {
        int now = i % n;
        if(ans[now] == -1) {
            ans[now] = t[now];
        } else {
            ans[now] = min(ans[now], t[now]);
        }
        ll next = (i+1) % n;
        if(ans[next] == -1) {
            ans[next] = ans[now]+s[now];
        } else {
            ans[next] = min(ans[next], ans[now]+s[now]); 
        }
    }

    for(ll i = 0; i < n; i++) cout << ans[i] << endl;

    return 0;
}