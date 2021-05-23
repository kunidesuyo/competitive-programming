#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    if(s == "keyence") {
        cout << "YES" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            string t;
            for(int k = 0; k < n; k++) {
                if(!(i <= k && k <= j)) t.push_back(s[k]);
            }
            if(t == "keyence") {
            cout << "YES" << endl;
            return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}