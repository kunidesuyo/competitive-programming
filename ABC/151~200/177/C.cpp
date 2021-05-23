#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

ll mod = 1000000007;

using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];


    ll ans = 0;
    ll sum = 0;

    for(int j = 0; j < n; j++) {
        sum += a[j];
        sum %= mod;
    }


    for(int i = 0; i < n - 1; i++) {
        sum -= a[i];
        if(sum < 0) sum += mod;
        ans += a[i] * sum;
        ans %= mod;

    }



    cout << ans << endl;



    return 0;
}