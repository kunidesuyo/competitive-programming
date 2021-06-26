#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;



int main() {
    ll n;
    cin >> n; 
    ll a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    ll b[2*n];
    b[0] = 0;
    for(int i = 1; i <= n; i++) b[i] = b[i-1] + a[i];
    for(int i = 1; i <= n; i++) b[i+n] = b[i+n-1] + a[i];
    if(b[n] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }

    for(int i = 0; i <= n; i++) {
        ll goal = b[i] + b[n] / 10LL;
        int pos1 = lower_bound(b, b+2*n+1, goal) - b;
        if(b[pos1] == goal) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}