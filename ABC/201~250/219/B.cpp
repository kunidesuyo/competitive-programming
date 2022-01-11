#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s[3];
    for(int i = 0; i < 3; i++) cin >> s[i];
    string t;
    cin >> t;

    string ans;
    for(int i = 0; i < t.length(); i++) {
        if(t[i] == '1') {
            ans += s[0];
        } else if(t[i] == '2') {
            ans += s[1];
        } else {
            ans += s[2];
        }
    }
    cout << ans << endl;

    return 0;
}