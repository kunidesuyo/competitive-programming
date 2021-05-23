#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if(n % 2 == 0) {
        bool ex = true;
        for(int i = 0; i < n / 2; i++) {
            if(s[i] != s[n/2 + i]) ex = false;
        }
        if(ex) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
            cout << "No" << endl;
    }

    return 0;
}