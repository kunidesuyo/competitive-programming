#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[5];
    ll mini = INF;
    for(ll i = 0; i < 5; i++) {
        cin >> a[i];
        mini = min(a[i], mini);
    }
    
    

    cout << n/mini + 4 + (n%mini != 0) << endl;
  

    return 0;
}