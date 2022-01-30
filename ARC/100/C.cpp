#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n+1];
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] -= i;
    }
    sort(a+1, a+n+1);
    ll index = n/2;
    if(n%2 != 0) index++;
    ll b = a[index];
    /*for(auto x : a) cout << x << " ";
    cout << "\n";
    cout << b << endl;*/

    ll ans = 0;
    for(ll i = 1; i <= n; i++) {
        ans += abs(a[i] - b);
    }
    cout << ans << endl;

    return 0;
}