#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> x;
    for(ll i = 1; i*i <= m; i++) {
        if(m % i != 0) continue;
        x.push_back(i);
        if(i * i != m) x.push_back(m/i);
    }

    sort(x.begin(), x.end(), greater<ll>());

    for(auto y : x) {
        if(y * n <= m) {
            cout << y << endl;
            return 0;
        }
    }

    return 0;
}