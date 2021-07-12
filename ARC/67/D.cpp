#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    //int tere = 0;
    ll ans = 0;
    for(int i = 0; i < n-1; i++) {
        ll dis = x[i+1] - x[i];
        ans += min(dis*a, b);
        /*if(dis * a >= b) {
            ans += b;
            //tere++;
        } else {
            ans += dis * a;
        }*/
    }
    //if(tere >= 2)
    cout << ans << endl;


    return 0;
}