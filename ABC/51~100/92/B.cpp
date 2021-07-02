#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d >> x;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    
    int ans = 0;
    d--;
    for(int i = 0; i < n; i++) {
        ans++;
        ans += d / a[i];
    }
    ans += x;
    cout << ans << endl;

    return 0;
}