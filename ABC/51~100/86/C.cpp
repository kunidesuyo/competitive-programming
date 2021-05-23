#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n+1], x[n+1], y[n+1];
    for(int i = 1; i <= n; i++) cin >> t[i] >> x[i] >> y[i];
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;

    bool ans = true;

    for(int i = 1; i <= n; i++) {
        int dis = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
        int sa = t[i] - t[i-1] - dis;
        //cout << dis << " " << sa << endl;
        if(sa % 2 != 0 || sa < 0) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;



    return 0;
}