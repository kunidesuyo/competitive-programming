#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll n;

ll f753(ll x) {
    if(x > n) return 0;
    bool e3 = false;
    bool e5 = false;
    bool e7 = false;
    ll num = 0;
    ll y = x;
    while(y > 0) {
        ll num2 = y % 10;
        if(num2 == 3) e3 = true;
        if(num2 == 5) e5 = true;
        if(num2 == 7) e7 = true;
        y /= 10;
    }
    if(e3 && e5 && e7) num++;
    num += f753(10 * x + 3);
    num += f753(10 * x + 5);
    num += f753(10 * x + 7);
    return num;
}

int main() {
    cin >> n;

    cout << f753(0) << endl;

    return 0;
}