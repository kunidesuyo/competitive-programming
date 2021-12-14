#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int l,r;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') {
            l = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'Z') {
            r = i;
            break;
        }
    }

    cout << r-l+1 << endl;

    return 0;
}