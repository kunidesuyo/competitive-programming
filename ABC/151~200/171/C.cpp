#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    string s;

    int i;
    for(i = 0; n > 0; i++) {
        n--;
        s += (char)('a' + n % 26);
        n /= 26;
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}