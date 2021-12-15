#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    ll k;
    cin >> k;

    for(ll i = 0; i < k; i++) {
        if(s[i] == '1') {
            continue;
        } else {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;

    return 0;
}