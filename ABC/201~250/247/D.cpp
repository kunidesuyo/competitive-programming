#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;


using namespace std;

int main() {
    ll q;
    cin >> q;
    deque<pair<ll, ll>> ball;
    for(ll i = 0; i < q; i++) {
        ll query;
        cin >> query;
        if(query == 1) {
            ll x, c;
            cin >> x >> c;
            ball.push_back(make_pair(x, c));
        } else {
            ll c;
            cin >> c;
            ll total = 0;
            while(c > 0) {
                pair<ll, ll> b = ball.front();
                ball.pop_front();
                if(b.second > c) {
                    total += b.first * c;
                    b.second -= c;
                    ball.push_front(b);
                    break;
                } else {
                    c -= b.second;
                    total += b.first * b.second;
                }
            }
            cout << total << endl;
        }
    }

    return 0;
}