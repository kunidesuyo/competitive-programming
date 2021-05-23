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
   return a * b / gcd(a, b);
}

int main() {
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s;
    cin >> t;

    ll l = lcm(n, m);
    ll dti = l / n;
    ll dsi = l / m;

    bool ans = true;
    ll si = 0;
    ll ti = 0;

    while(si <= n-1 && ti <= m-1) {
        if(s[si] != t[ti]) {
            ans = false;
            break;
        }
        si += dsi;
        ti += dti;
    }

    cout << (ans ? l : -1) << endl;


    return 0;
}