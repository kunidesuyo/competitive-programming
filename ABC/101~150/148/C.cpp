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
    ll a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;

    return 0;
}