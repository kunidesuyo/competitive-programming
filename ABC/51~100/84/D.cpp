#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

bool is_prime(int x) {
    if(x == 1) return false;
    if(x == 2 || x == 3) return true;
    bool a = true;
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            a = false;
            break;
        }
    }
    return a;
}

int main() {
    int q;
    cin >> q;
    int l[q], r[q];
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];

    int num[100000 + 9];
    num[0] = 0;

    for(int i = 1; i <= 100000; i++) {
        if(i % 2 == 1 && is_prime(i) == true && is_prime((i+1)/2) == true) {
            num[i] = num[i-1] + 1;
        } else {
            num[i] = num[i-1];
        }
    }


    for(int i = 0; i < q; i++) {
        cout << num[r[i]] - num[l[i]-1]  << endl;
    }

    return 0;
}