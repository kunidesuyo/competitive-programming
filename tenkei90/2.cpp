#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 != 0) return 0;

    for(int bit = 0; bit < (1<<n); bit++) {
        string s;
        for(int i = 0; i < n; i++) {
            if(bit & (1<<i)) {
                s.push_back(')');
            } else {
                s.push_back('(');
            }
        }
        reverse(s.begin(), s.end());
        int cnt = 0;
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                cnt++;
            } else {
                if(cnt == 0) {
                    ok = false;
                } else {
                    cnt--;
                }
            }
        }
        if(cnt == 0 && ok) cout << s << endl;
    }

    return 0;
}