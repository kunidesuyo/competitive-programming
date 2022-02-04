#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    ll n = s.length();

    ll ans = 0;

    for(ll bit = 0; bit < 1<<(n-1); bit++) {
        bool skip = false;
        /*for(ll i = 1; i < n-1; i++) {
            ll now_bit = 1 << i;
            ll pre_bit = 1 << (i-1);
            if((bit & now_bit != 0) && (bit & pre_bit != 0)) {
                skip = true;
                break;
            }
        }*/
        if(skip) continue;
        vector<ll> num;
        ll now = 0;
        //cout << bit << endl;
        for(ll i = 0; i < n-1; i++) {
            ll now_bit = 1 << i;
            //cout << now_bit << endl;
            ll now_num = s[i] - '0';
            
            if(now_bit & bit) {
                now *= 10;
                now += now_num;
                //cout << now << endl;
                //cout << "itti " << i << endl;
                num.push_back(now);
                now = 0;
            } else {
                now *= 10;
                now += now_num;
                //cout << "tigau " << i << endl;
                //cout << now << endl;
            }
        }
        //cout << now << endl;
        now *= 10;
        now += (ll)(s[n-1] - '0');
        num.push_back(now);
        ll v = 0;
        for(auto y : num) {
            v += y;
            //cout << y << endl;
        }
        //cout << v << endl;
        //cout << bit << endl;
        //cout << "\n";
        ans += v;
    }
    cout << ans << endl;


    return 0;
}