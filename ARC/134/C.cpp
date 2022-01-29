#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

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
    ll val = 1;
    for(ll i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    ll bunsi = 1;
    for(ll i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    val *= modinv(bunsi);
    val %= mod;
    return val;
}

const int MAX = 510000;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i - 1] * inv[i] % mod;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
}


int main() {
    COMinit();
    ll n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll not1 = 0;
    for(int i = 1; i < n; i++) not1 += a[i];

    ll ans = 0;

    vector<ll> memo(k+1, 1);
    vector<ll> rmemo(k+1, 1);

    if(a[0] <= not1) {
        cout << 0 << endl;
        return 0;
    }

    for(int i = 1; i <= k; i++) {
        ll num1 = a[0];
        ll num = COM(k, i);
        if(i > not1) break;
        for(int j = 1; j < n; j++) {
            memo[i] *= COM(i+a[j]-1, a[j]);
            memo[i] %= mod;
        }
        /*memo[i] *= num;
        memo[i] %= mod;
        memo[i] -= rmemo[i-1];*/
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
    /*cout << "memo" << endl;
    for(int i = 1; i <= k; i++) {
        cout << memo[i] << " ";
    }
    cout << "\n";
    cout << "rmemo" << endl;
    for(int i = 1; i <= k; i++) {
        cout << rmemo[i] << " ";
    }
    cout << "\n";*/
    cout << ans << endl;


    return 0;
}