#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    ll ans = 0;
    int n = s.length();
    int wnum = 0;

    bool start = false;

    for(int i = 0; i < n; i++) {
        if(!start) {
            if(s[i] == 'B') {
                start = true;
            } else {
                wnum++;
            }
        } else {
            if(s[i] == 'W') {
                ans += i - wnum;
                wnum++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}