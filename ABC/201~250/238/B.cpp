#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int b[n+2];
    b[0] = 0;
    for(int i = 0; i < n; i++) {
        b[i+1] = (b[i] + a[i]) % 360;
    }
    b[n+1] = 360;
    sort(b, b+n+2);
    int ans = 0;
    for(int i = 0; i < n+1; i++) {
        int now = b[i+1] - b[i];
        if(now > ans) ans = now;
    }
    cout << ans << endl;

    return 0;
}