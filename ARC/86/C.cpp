#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        x[a-1]++;
    }

    sort(x.begin(), x.end());

    int num = n;
    int ans = 0;
    if(n <= k) {
        cout << ans << endl;
        return 0;
    }
    for(int i = 0; i < n; i++) {
        num--;
        ans += x[i];
        if(num <= k) break;
    }

    cout << ans << endl;
    
    return 0;
}