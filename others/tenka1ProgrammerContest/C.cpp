#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll N;
    cin >> N;
    
    for(ll h = 1; h <= 3500; h++) {
        for(ll n = 1; n <= 3500; n++) {
            ll num1 = N*h*n;
            ll num2 = 4*h*n - N*n - N*h;
            if(num2 > 0 && num1 % num2 == 0) {
                ll w = num1 / num2;
                cout << h << " ";
                cout << n << " ";
                cout << w << endl;
                return 0;
            }
        }
    }

    return 0;
}