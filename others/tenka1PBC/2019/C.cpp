#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int white = 0;

    for(int i = 0; i < n; i++)  {
        if(s[i] == '.') white++;
    }

    int black = 0;
    int ans = 1000000;

    for(int i = 0; i <= n; i++) {
        ans = min(ans, black + white);
        if(i == n) break;
        if(s[i] == '#') {
            black++;
        } else {
            white--;
        }
    }

    cout << ans << endl;

    return 0;
}