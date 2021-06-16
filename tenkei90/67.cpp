#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll base8_ll(string s) {
    int n = s.length();
    ll ret = 0;
    ll t = 1;
    for(int i = n-1; i >= 0; i--) {
        ret += t * (s[i] - '0');
        t *= 8;
    }
    return ret;
}

string ll_base9(ll x) {
    string ret;
    while(x > 0) {
        char c = ((x%9) + '0');
        ret = c + ret;
        x /= 9;
    }
    return ret;
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    if(s.length() == 1 && s[0] == '0') {
        cout << 0 << endl;
        return 0;        
    }

    for(int i = 0; i < k; i++) {
        //cout << base8_ll(s) << endl;
        //cout << ll_base9(base8_ll(s)) << endl;
        s = ll_base9(base8_ll(s));
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '8') s[j] = '5';
        }
    }

    cout << s << endl;


    return 0;
}