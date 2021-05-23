#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int ac = 0, wa = 0, tle = 0, re = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == "AC") {
            ac++;
        } else if(s[i] == "WA") {
            wa++;
        } else if(s[i] == "TLE") {
            tle++;
        } else if(s[i] == "RE") {
            re++;
        }
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

    return 0;
}