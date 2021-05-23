#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        q.push(a);
    }
    pair<ll, ll> cb[m];
    for(ll i = 0; i < m; i++) {
        cin >> cb[i].second >> cb[i].first;
    }

    /*for(ll i = 0; i < n; i++) {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;*/

    sort(cb, cb+m, greater<pair<ll, ll>>());

    /*
    cout << "\n";
    for(ll i = 0; i < m; i++) {
        cout << cb[i].first << " " << cb[i].second << endl;
    }
    cout << "\n";
    return 0;*/

    for(ll i = 0; i < m; i++) {
        bool end = false;
        for(ll j = 0; j < cb[i].second; j++) {
            ll num = q.top();
            q.pop();
            if(num < cb[i].first) {
                /*cout << i << " " << j << " ";
                cout << num << " " << cb[i].first << endl;*/
                q.push(cb[i].first);
            } else {
                q.push(num);
                end = true;
                break;
            }
        }
        if(end) break;
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        //cout << q.top() << endl;
        ans += q.top();
        q.pop();
    }
    //cout << "\n";
    cout << ans << endl;

    return 0;
}