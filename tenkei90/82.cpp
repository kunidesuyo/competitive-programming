#include <bits/stdc++.h>
#include <cmath>


using namespace std;

unsigned long long mod = 1e9+7;


unsigned long long modpow(unsigned long long a, unsigned long long n) {
    unsigned long long res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;        
    }
    return res;
}

unsigned long long modinv(unsigned long long a) {
    return modpow(a, mod - 2);
}

int main() {
    unsigned long long l, r;
    cin >> l >> r;

    unsigned long long ans = 0;
    unsigned long long numl = 1;
    unsigned long long numr = 10;
    bool cal = false;
    bool stop = false;
    for(int i = 1; i <= 19; i++) {
        unsigned long long nowl = numl;
        unsigned long long nowr = numr-1;
        if(numl <= l && l < numr) {
            cal = true;
            nowl = l;
        }
        if(cal) {
            if(numl <= r && r < numr) {
                nowr = r;
                stop = true;
            }
            unsigned long long num = (nowr - nowl + 1);
            num %= mod;
            unsigned long long num2 = (nowr + nowl) % mod;
            num *= num2;
            num %= mod;
            num *= modinv(2);
            num %= mod;
            num *= i;
            num %= mod;
            ans += num;
            ans %= mod;
        }
        if(stop) break;
        numr *= 10;
        numl *= 10;
    }


    cout << ans << endl;

    return 0;
}