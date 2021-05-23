#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nPr(ll n, ll r) {
    if(n == 0) return 1;
    ll val = 1;
    for(int i = 0; i < r; i++) {
        val *= n;
        n--;
    }
    return val;
}

int main() {
    ll n;
    ll k;
    cin >> n >> k;

    if(k == 1) {
        for(int i = 0; i < 3; i++) {
            cout << 1 << " ";
        }
        cout << "\n";
        return 0;
    }

    /*ll num = k / ((n-1)*(n-1));
    k /= ((n-1)*(n-1));

    a[0] += num;

    num = k / (n-1);
    k /= (n-1);

    a[1] += num;
    a[2] += k;

    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";*/

    k -= 1LL;

    ll i = 4;
    ll num = 3;

    while(i <= 3*n) {
        cout << k << endl;
        if(num >= k) {
            break;
        } else {
            k -= num;
        }
        i++;
        num += 3;
    }

    cout << i << endl;

    

    return 0;
}