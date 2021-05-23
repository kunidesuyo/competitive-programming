#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    bool humiyasui = true;
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            if(!(s[i] == 'R' || s[i] == 'U' || s[i] == 'D')) humiyasui = false;
        } else  {
            if(!(s[i] == 'L' || s[i] == 'U' || s[i] == 'D')) humiyasui = false;
        }
    }

    if(humiyasui) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}