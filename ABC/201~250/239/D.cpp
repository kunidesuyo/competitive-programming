#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

bool is_prime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int i = a; i <= b; i++) {
        bool win_aoki = false;
        for(int j = c; j <= d; j++) {
            if(is_prime(i+j)) {
                win_aoki = true;
                break;
            }
        }
        if(win_aoki == false) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;

    return 0;
}