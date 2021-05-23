#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    char s[4];
    for(int i = 0; i < 4; i++) cin >> s[i];

    sort(s, s+4);

    if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    
    return 0;
}