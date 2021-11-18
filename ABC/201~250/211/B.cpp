#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s[4];
    for(int i = 0; i < 4; i++) cin >> s[i];

    sort(s,s+4);

    bool ans = true;

    string x[4] = {"2B", "3B", "H", "HR"};

    for(int i = 0; i < 4; i++) {
        if(s[i] != x[i]) ans = false;
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}