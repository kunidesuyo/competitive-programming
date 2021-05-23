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

    int ans = n;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i+1]) ans--;
    }
    cout << ans << endl;

    return 0;
}