#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;



int main() {
    ll k;
    cin >> k;

    vector<ll> vec;
    for(ll i = 1; i * i <= k; i++) {
        if (k % i != 0LL) continue;
        vec.push_back(i);
        if(i != (k/i)) vec.push_back(k/i);
    }
    sort(vec.begin(), vec.end());

    ll ans = 0;
    for(int i = 0; i < (int)vec.size(); i++) {
        for(int j = i; j < (int)vec.size(); j++) {
            if(vec[j] > k / vec[i]) continue;
            if(k % (vec[i] * vec[j]) != 0) continue;
            if(k / (vec[i] * vec[j]) >= vec[j]) ans++;
        }
    }
    cout << ans << endl;


    return 0;
}