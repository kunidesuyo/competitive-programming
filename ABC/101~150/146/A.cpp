#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    string t[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int ans;
    for(int i = 0; i < 7; i++) {
        if(s == t[i]) ans = 7 - i;
    } 
    cout << ans << endl;

    return 0;
}