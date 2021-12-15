#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k; 

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            ans *= k;
        } else {
            ans *= k-1;
        }
    }
    cout << ans << endl;

    return 0;
}