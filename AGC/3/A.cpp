#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int h[4];
    for(int i = 0; i < 4; i++) h[i] = 0;

    for(int i = 0; i < (int)s.length(); i++) {
        if(s[i] == 'N') {
            h[0]++;
        } else if (s[i] == 'W') {
            h[1]++;
        } else if (s[i] == 'S') {
            h[2]++;
        } else if (s[i] == 'E') {
            h[3]++;
        }
    }
    bool ans = true;
    for(int i = 0; i < 2; i++) {
        if((h[i] == 0 && h[i+2] != 0) || (h[i] != 0 && h[i+2] == 0)) {
            ans = false;
        }
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}