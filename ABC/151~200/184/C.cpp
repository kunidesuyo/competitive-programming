#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int s[2], f[2];
    cin >> s[0] >> s[1];
    cin >> f[0] >> f[1];

    int ans;

    if(s[0] == f[0] && s[1] == f[1]) {
        ans = 0;
    } else if (s[0] + s[1] == f[0] + f[1]){
        ans = 1;
    } else if (s[0] - s[1] == f[0] - f[1]){
        ans = 1;
    } else if (abs(s[0] - f[0]) + abs(s[1] - f[1]) <= 3) {
        ans = 1;
    } else if ((s[0] + s[1]) % 2 == (f[0] + f[1]) % 2) {
        ans = 2;
    } else if (abs(s[0] + s[1] - f[0] - f[1]) <= 3) {
        ans = 2;
    } else if (abs(s[0] - s[1] - f[0] + f[1]) <= 3) {
        ans = 2;
    } else if (abs(s[0] - f[0]) + abs(s[1] - f[1]) <= 6) {
        ans = 2;
    } else {
        ans = 3;
    }

    cout << ans << endl;



    return 0;
}