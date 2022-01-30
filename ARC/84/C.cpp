#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;


int main() {
    ll n;
    cin >> n;
    ll a[n], b[n], c[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) cin >> c[i];

    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);

    ll dp[3][n];

    for(ll i = 0; i < n; i++) {
        if(i == 0) dp[0][i] = 1;
        else dp[0][i] = dp[0][i-1] + 1;
    }

    
    for(ll j = 0; j < n; j++) {
        ll index = lower_bound(a, a+n, b[j]) - a;
        index--;
        if(index < 0) {
            dp[1][j] = 0;
            continue;
        }
        if(j==0) {
            dp[1][j] = dp[0][index];
        } else {
            dp[1][j] = dp[1][j-1] + dp[0][index];
        }
    }
    for(ll j = 0; j < n; j++) {
        ll index = lower_bound(b, b+n, c[j]) - b;
        index--;
        if(index < 0) {
            dp[2][j] = 0;
            continue;
        }
        if(j==0) {
            dp[2][j] = dp[1][index];
        } else {
            dp[2][j] = dp[2][j-1] + dp[1][index];
        }
    }

    /*cout << "dp" << endl;
    for(ll i = 0; i < 3; i++) {
        for(ll j = 0; j < n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/


    
    cout << dp[2][n-1] << endl;
    

    return 0;
}