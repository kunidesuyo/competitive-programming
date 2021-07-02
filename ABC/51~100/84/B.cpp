#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    bool ans = true;
    for(int i = 0; i < a+b+1; i++) {
        if(i < a) {
            if(!((s[i] - '0') >= 0 && (s[i] - '0') <=9)) {
                ans = false;
            }
        } else if (i == a) {
            if(s[i] != '-') ans = false;
        } else {
            if(!((s[i] - '0') >= 0 && (s[i] - '0') <=9)) {
                ans = false;
            }
        }
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}