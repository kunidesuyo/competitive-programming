#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int ans = 1;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != t[i]) ans = 0;
    }

    if(s.length() + 1 != t.length()) ans = 0;

    if(ans == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}