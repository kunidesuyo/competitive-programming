#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') {
            ans.push_back('0');
        } else if (s[i] == '1') {
            ans.push_back('1');
        } else if (s[i] == 'B') {
            if(ans.size() > 0) ans.erase(ans.end()-1);
        }
    }

    cout << ans << endl;


    return 0;
}