#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll r, x, y;
    cin >> r >> x >> y;

    ll d = x * x + y * y;
    bool heihou = false;

    ll num;
    ll i = 1;

    while(i * i <= d) {
        if(i * i == d) {
            num = i; 
            heihou = true;
            break;
        }
        i++;
    }

    ll ans;

    if(heihou) {
        if(r > num) {
            ans = 2;
        } else {
            ans = num / r;
            if(num % r != 0) {
                ans++;
            }
        }
    } else {
        //cout << i << endl;
        if(r > i) {
            ans = 2;
        } else {
            ans = i / r;
            if(i % r != 0) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}