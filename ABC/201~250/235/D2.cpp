#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;


using namespace std;



int main() {
    ll a, n;
    cin >> a >> n;
    
    ll max_v = 1e6;

    queue<ll> q;
    q.push(1);
    vector<ll> dp(max_v, -1);
    dp[1] = 0;


    while(!q.empty()) {
        ll s = q.front(); q.pop();
        //cout << s << endl;
        if(s == n) break;
        ll next;
        next = s * a;
        //cout << next << endl;
        if(next < max_v) {
            if(dp[next] == -1) {
                dp[next] = dp[s] + 1;
                q.push(next);
            }
        }

        if(s >= 10 && s % 10 != 0) {
            string x = to_string(s);
            ll l = x.length();
            x = x.substr(l-1, l) + x.substr(0, l-1);
            next = atoi(x.c_str());
            //cout << next << endl;
            if(next < max_v) {
                if(dp[next] == -1) {
                    dp[next] = dp[s] + 1;
                    q.push(next);
                }
            }
        }
    }

    cout << dp[n] << endl;


   
    return 0;
}