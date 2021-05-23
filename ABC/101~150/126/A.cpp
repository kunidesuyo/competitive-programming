#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if(s[k-1] == 'A') {
        s[k-1] = 'a';
    } else if(s[k-1] == 'B') {
        s[k-1] = 'b';
    } else if(s[k-1] == 'C') {
        s[k-1] = 'c';
    }

    cout << s << endl;

    return 0;
}