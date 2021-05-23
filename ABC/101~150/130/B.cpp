#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int l[n];
    for(int i = 0; i < n; i++) {
        cin >> l[i];
    }

    int a = 0;
    int ans;

    for(int i = 0; i < n; i++) {
        a += l[i];
        if(x < a) {
            ans = i + 1;
            break;
        } else if(i == n - 1) {
            ans = n + 1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}