#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    char c = s[0];
    int ans = 0;

    for(int i = 1; i < s.length(); i++) {
        if(c != s[i]) {
            ans++;
            c = s[i];
        }
    }

    cout << ans << endl;


    return 0;
}