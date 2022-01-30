#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll mod = 998244353;
ll modpow(ll a, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;        
    }
    return res;
}

ll modinv(ll a) {
    return modpow(a, mod - 2);
}

ll nCr_mod(ll n, ll r) {
    if(n < r) return 0;
    if(n < 0 || r < 0) return 0;
    // nCr = n! / r!(n-r)!
    // n!/(n-r)! 
    ll val = 1;
    for(ll i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    // r!
    ll bunsi = 1;
    for(ll i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    //  /r! % mod
    val *= modinv(bunsi);
    val %= mod;
    return val;
}


int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll not1 = 0;
    for(ll i = 1; i < n; i++) not1 += a[i];

    //cout << a[0]-not1-1 << endl;
    //cout << k-1 << endl;
    ll ans = nCr_mod(a[0] - not1 - 1, k-1);
    //cout << ans << endl;

    for(ll i = 1; i < n; i++) {
        ans *= nCr_mod(k+a[i]-1, k-1);
        ans %= mod;
    }
    cout << ans << endl;

    /*vector<ll> memo(k+1, 1);
    vector<ll> rmemo(k+1, 1);

    if(a[0] <= not1) {
        cout << 0 << endl;
        return 0;
    }

    for(ll i = 1; i <= k; i++) {
        ll num1 = a[0];
        ll num = COM(k, i);
        if(i > not1) break;
        for(ll j = 1; j < n; j++) {
            memo[i] *= COM(i+a[j]-1, a[j]);
            memo[i] %= mod;
        }
        memo[i] *= num;
        memo[i] %= mod;
        memo[i] -= rmemo[i-1];
        memo[i] -= rmemo[i-1];
        //if(memo[i] < 0) memo[i] += mod;
        while(memo[i] < 0) memo[i]+=mod;
        if(i == 1) {
            rmemo[i] = memo[i];
        } else {
            rmemo[i] = rmemo[i-1] + memo[i];
            rmemo[i] %= mod;
        }
        num *= memo[i];
        num %= mod;
        num1 -= not1;
        num1 -= k;
        if(num1 < 0) {
            break;
        }
        num *= COM(k+num1-1, num1);
        num %= mod;
        ans += num;
        ans %= mod;
    }
    cout << "memo" << endl;
    for(ll i = 1; i <= k; i++) {
        cout << memo[i] << " ";
    }
    cout << "\n";
    cout << "rmemo" << endl;
    for(ll i = 1; i <= k; i++) {
        cout << rmemo[i] << " ";
    }
    cout << "\n";
    cout << ans << endl;*/


    return 0;
}