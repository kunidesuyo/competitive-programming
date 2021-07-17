#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;
int main() {
    ll n;
    cin >> n;

    ll a[10][10];
    for(ll i = 0; i <= 9; i++) {
        for(ll j = 0; j <= 9; j++) {
            a[i][j] = 0;
        }
    }

    /*for(ll i = 0; i <= 9; i++) {
        for(ll j = 0; j <= 9; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }*/

    for(ll i = 1; i <= n; i++) {
        ll head, tail;
        ll num = i;
        tail = num % 10;
        while(num > 0) {
            head = num % 10;
            num /= 10;
        }
        a[head][tail]++;
    }

    /*for(ll i = 0; i <= 9; i++) {
        for(ll j = 0; j <= 9; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }*/

    ll ans = 0;
    for(ll i = 1; i <= 9; i++) {
        for(ll j = 1; j <= 9; j++) {
            ans += a[i][j] * a[j][i];
        }
    }
    
    cout << ans << endl;
    
    return 0;
}