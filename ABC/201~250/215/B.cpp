#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;

    int ans;
    ll num = 1;
    for(int i = 1; i <= 100; i++) {
        num *= 2;
        if(num > n) {
            ans = i - 1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}