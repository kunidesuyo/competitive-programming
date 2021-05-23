#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll k;
    cin >> k;
    queue<ll> q;

    for(ll i = 1; i <= 9; i++) {
        q.push(i);
    }

    ll num;
    for(ll i = 0; i < k-1; i++) {
        num = q.front();
        q.pop();
        if(num % 10 != 0) q.push(10*num + (num % 10)-1);
        q.push(10*num + (num%10));
        if(num % 10 != 9) q.push(10*num + (num%10)+1);
    }

    ll ans = q.front();
    cout << ans << endl;

    return 0;
}