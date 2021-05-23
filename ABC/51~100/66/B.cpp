#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;

    for(int i = 1; n - 2 * i >= 0; i++) {
        ans -= 2;
        int num = (n - 2 * i) / 2;
        string s1, s2;
        s1 = s.substr(0, num);
        s2 = s.substr(num, num);
        if(s1 == s2) break;
    }

    cout << ans << endl;

    return 0;
}