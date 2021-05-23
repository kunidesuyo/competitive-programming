#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    bool ans = true;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(s[i] - 'A' >= 0 && s[i] - 'A' <= 26) {
                ans = false;
            }
        } else {
            if(s[i] - 'a' >= 0 && s[i] - 'a' <= 26) {
                ans = false;
            }
        }
        if(!ans) break;
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}