#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int ans = 0;

    for(int i = 0; i < n-3; i++) {
        if(s.substr(i, 4) == "ZONe") {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}