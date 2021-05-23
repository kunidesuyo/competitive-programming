#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    for(int i = 0; i <= 999; i++) {
        string t;
        string zero = "0";
        if(i < 10) {
            t = zero + zero + to_string(i);
        } else if(100 > i && i >= 10) {
            t = zero + to_string(i);
        } else {
            t = to_string(i);
        }
        //cout << t << endl;
        int index = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == t[index]) {
                index++;
            }
            if(index == 3) break;
        }
        if(index == 3) ans++;
    }

    cout << ans << endl;

    return 0;
}