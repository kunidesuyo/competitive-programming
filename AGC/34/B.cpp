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

    ll a = 0;
    ll ans = 0;
    for(ll i = 0; i < n;) {
        if(s[i] == 'A') {
            a++;
            i++;
        } else if(i+1 < n && s[i] == 'B' && s[i+1] == 'C') {
            ans += a;
            i += 2;
        } else {
            a = 0;
            i++;
        }
    }
    cout << ans << endl;
    /*for(ll i = 0; i < n;) {
        //cout << i << endl;
        if(s[i] == 'A') {
            a++;
            i++;
        } else if(s[i] == 'B') {
            if(i+1 < n) {
                if(s[i+1] == 'C') {
                    ans += a;
                    i += 2;
                } else {
                    a = 0;
                    i++;
                }
            } else {
                a = 0;
                i++;
            }
        } else {
            a = 0;
            i++;
        }
    }*/

    

    return 0;
}