#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll q;
    cin >> q;
    ll add = 0;
    priority_queue<ll, vector<ll>, greater<ll>> q1;
    vector<ll> ans;
    for(ll i = 0; i < q; i++) {
        ll a, x;
        cin >> a;
        if(a <= 2) cin >> x;
        if(a == 1) {
            q1.push(x - add);
        } else if(a == 2) {
            add += x;
        } else {
            ans.push_back(q1.top() + add);
            q1.pop();
        }
    }
    for(auto z : ans) {
        cout << z << endl;
    }
    return 0;
}