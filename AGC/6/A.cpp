#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;

    int kyoutu = 0;

    for(int i = 1; i <= n; i++) {
        bool itti = true;
        for(int j = 0; j < i; j++) {
            if(t[j] != s[n-i+j]) itti = false;
        }
        if(itti) kyoutu = i;
    }

    cout << 2 * n - kyoutu << endl;

    return 0;
}