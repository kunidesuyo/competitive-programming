#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll gcd(ll a, ll b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main() {
    ll n, s;
    cin >> n >> s;
    ll x[n];
    for(ll i = 0; i < n; i++) {
        cin >> x[i];
    }

    ll y[n-1];

    for(ll i = 0; i < n; i++) {
        x[i] = abs(x[i] - s);
    }

    ll ans = x[0];
    for(ll i = 0; i < n; i++) {
        ans = gcd(x[i], ans);
    }

    cout << ans << endl;

    return 0;
}