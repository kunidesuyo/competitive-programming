#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;


using namespace std;

int main() {
    ll n, k, x;
    cin >> n >> k >> x;
    priority_queue<ll, vector<ll>, less<ll>> q;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        q.push(a);
    }


    while(!q.empty() && k > 0) {
        ll b = q.top();
        q.pop();
        ll y = b / x;
        if(y == 0) {
            k--;
            continue;
        }
        if(y > k) {
            b -= x * k;
            if(b != 0) q.push(b);
            break;
        } else {
            b -= x * y;
            k -= y;
            if(b != 0) q.push(b);
        }
    }

    ll size = q.size();
    ll ans = 0;
    for(ll i = 0; i < size; i++) {
        ll g = q.top();
        q.pop();
        ans += g;
    }
    cout << ans << endl;



    return 0;
}