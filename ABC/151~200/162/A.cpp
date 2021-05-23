#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "No";

    for(int i = 0; i < 3; i++) {
        if(s[i] == '7') {
            ans = "Yes";
        }
    }

    cout << ans << endl;

    return 0;
}