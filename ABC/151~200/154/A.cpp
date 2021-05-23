#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;

    if(s == u) {
        a--;
    }
    if(t == u) {
        b--;
    }

    cout << a << " " << b << endl;

    return 0;
}