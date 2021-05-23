#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x;
    cin  >> x;

    int con = 1;
    int ans;

    for(int i = x; con == 1;i++) {
        if(x == 2 || x == 3 || x == 5) {
            ans = i;
            con = 0;
        }
        bool prime = true;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }
        }
        if(prime) {
            ans = i;
            con = 0;
        }
    }

    cout << ans << endl;

    return 0;
}