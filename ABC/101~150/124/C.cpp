#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    int ans1 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] - '0' != i%2) {
            ans1++;
        }
    }
    
    int ans2 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] - '0' == i%2) {
            ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;

    return 0;
}