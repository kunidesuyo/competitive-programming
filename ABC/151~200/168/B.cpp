#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    int k;
    cin >> k;
    cin >> s;

    if(s.length() <= k) {
        cout << s << endl;
    } else {
        for(int i = 0; i < k; i++) {
            cout << s[i];
        }
        cout << "..." << endl;
    }

    return 0;
}