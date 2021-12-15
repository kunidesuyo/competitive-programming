#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n; i++) {
        while(a[i] % 2 == 0) {
            ans++;
            a[i] /= 2;
        }
    }
    cout << ans << endl;

    return 0;
}