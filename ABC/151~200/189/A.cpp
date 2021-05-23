#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s[0] == s[1] && s[1] == s[2]) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }

    return 0;
}