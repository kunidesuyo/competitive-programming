#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    char s[3];
    for(int i= 0; i < 3; i++) cin >> s[i];

    int ans = 0;
    int con = 0;

    for(int i = 0; i < 3; i++) {
        if(s[i] == 'R') {
            con++;
            if(con > ans) ans = con;
        } else {
            con = 0;
        }
    }

    cout << ans << endl;

    return 0;
}