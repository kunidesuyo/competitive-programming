#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    bool ans = false;
    for(int i = 0; i < n; i++) {
        if(x[i] < s && y[i] > d) {
            ans = true;
            break;
        }
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}