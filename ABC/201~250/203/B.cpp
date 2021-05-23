#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '6') {
            s[i] = '9';
        } else if(s[i] == '9') {
            s[i] = '6';
        }
        cout << s[i];
    }
    cout << "\n";

    return 0;
}