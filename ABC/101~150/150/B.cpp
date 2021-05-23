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

    int ans = 0;

    for(int i = 0; i < n - 2; i++) {
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}