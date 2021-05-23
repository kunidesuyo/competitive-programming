#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;


    int ans = 0;

    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] != s[s.size() - i - 1]) ans++;
    }

    cout << ans << endl;
    

    return 0;
}