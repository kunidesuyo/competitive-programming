#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    bool cont = true;
    for(int i = 1;;i++) {
        int s = pow(10, i - 1);
        int e = pow(10, i);
        if(e > n) {
            e = n;
            cont = false;
        }
        if(i % 2 != 0) {
            ans += e - s;
            if(!cont) ans++;
        }
        if(!cont) break;
    }

    cout << ans << endl;



    return 0;
}