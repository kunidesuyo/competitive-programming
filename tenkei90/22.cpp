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
    ll a, b, c;
    cin >> a >> b >> c;

    ll g = gcd(a, b);
    g = gcd(g, c);

    if(g == 1) {
        cout << a+b+c-3 << endl;
    } else {
        cout << a/g + b/g + c/g - 3 << endl;
    }

    return 0;
}