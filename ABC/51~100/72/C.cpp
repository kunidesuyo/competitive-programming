#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int num = 100001;
    vector<int> count(num);

    for(int i = 0; i < n; i++) {
        for(int j = -1; j <= 1; j++) {
            if(a[i]+j>0 && a[i]+j<=num-1) count[a[i]+j]++;
        }
    }

    int ans = 0;
    for(int i = 0; i < count.size(); i++) {
        ans = max(ans, count[i]);
    }

    cout << ans << endl;

    return 0;
}