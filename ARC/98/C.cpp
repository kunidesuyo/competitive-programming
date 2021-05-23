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

    int migi2 = 0;
    int hidari2 = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'E') {
            migi2++;
        } else {
            hidari2++;
        }
    }

    int ans = 1000000;
    int hidari1 = 0;
    int migi1 = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            if(s[i] == 'W') {
                hidari2--;
            } else {
                migi2--;
            }
        } else {
            if(s[i-1] == 'W') {
                hidari1++;
            } else {
                migi1++;
            }
            if(s[i] == 'W') {
                hidari2--;
            } else {
                migi2--;
            }
        }
        ans = min(ans, hidari1 + migi2);
    }

    cout << ans << endl;

    return 0;
}