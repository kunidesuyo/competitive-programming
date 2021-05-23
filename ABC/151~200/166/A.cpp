#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s[1] == 'B') {
        s[1] = 'R';
    } else {
        s[1] = 'B';
    }

    cout << s << endl;

    return 0;
}