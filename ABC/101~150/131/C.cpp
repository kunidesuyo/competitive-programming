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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll range = b - a + 1;
    ll cnum, dnum, cdnum;
    ll lcm_cd = lcm(c, d);

    
    cnum = b / c - (a - 1) / c;
    dnum = b / d - (a - 1) / d;
    cdnum = b / lcm_cd - (a - 1) / lcm_cd;



    ll ans = range - cnum - dnum + cdnum;

  


    cout << ans << endl;

    return 0;
}