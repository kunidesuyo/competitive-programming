#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t[i]) ans++;
    }
    cout << ans << endl;

    return 0;
}