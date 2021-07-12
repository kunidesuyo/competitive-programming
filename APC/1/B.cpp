#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];   
    for(ll i = 0; i < n; i++) cin >> b[i];

    ll sa[n];
    ll total_a = 0;   
    ll total_b = 0;

    for(ll i = 0; i < n; i++) {
        sa[i] = b[i] - a[i];
        total_a += a[i];
        total_b += b[i];
    }

    if(total_b < total_a) {
        cout << "No" << endl;
        return 0;
    }

    ll num = 0, num_b = 0;
    for(ll i = 0; i < n; i++) {
        if(i == n-1) {
            if(num_b >= 0) {
                sa[i] += num_b;
            } else {
                a[i] += 2 * (-num_b);
                sa[i] = b[i] - a[i];
            }
            if(sa[i] < 0) {
                    cout << "No" << endl;
                    return 0;
            } else {
                num += sa[i];
            }
            continue;
        }
        if(sa[i] == 0) {
            continue;
        } else if (sa[i] > 0) {
            num += sa[i] / 2;
            num_b += sa[i] / 2;
            if(sa[i] % 2 != 0) num++; 
        } else if(sa[i] < 0) {
            num_b += sa[i];
        }
    }
    if(num == total_b - total_a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}