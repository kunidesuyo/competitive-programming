#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int t, a;
    cin >> t >> a;
    int h[n];
    for(int i = 0; i< n; i++) cin >> h[i];

    int ans;
    int he;
    bool first = true;
    for(int i = 0; i < n; i++) {
        int temp = 1000 * t - h[i] * 6;
        if(first) {
            ans = i;
            he = abs(1000 * a - temp);
            first = false;
        } else {
            if(he > abs(1000 * a - temp)) {
                ans = i;
                he = abs(1000 * a - temp);
            }
        }
    }

    ans++;
    cout << ans << endl;

    return 0;
}