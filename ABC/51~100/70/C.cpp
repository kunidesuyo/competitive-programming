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

ll lcm(ll a, ll b)
{
   return a / gcd(a, b) * b;
}

int main() {
    ll n;
    cin >> n;
    ll t[n];
    for(ll i = 0; i < n; i++) {
        cin >> t[i];
    }


    ll ans = t[0];

    for(ll i = 1; i < n; i++) {
        ans = lcm(ans, t[i]);
    }

    cout << ans << endl;


    return 0;
}