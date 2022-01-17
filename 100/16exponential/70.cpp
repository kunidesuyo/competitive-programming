#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long long mod = 1000000000 + 7;

long long modpow(long long a, long long n) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;        
    }
    return res;
}

long long modinv(long long a) {
    return modpow(a, mod - 2);
}

long long nCr_mod(long long n, long long r) {
    long long val = 1;
    for(long long i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    long long bunsi = 1;
    for(long long i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    val *= modinv(bunsi);
    val %= mod;
    return val;
}

int main() {
    long long n, m;
    cin >> m >> n;

    cout << modpow(m, n) << endl;

    return 0;
}