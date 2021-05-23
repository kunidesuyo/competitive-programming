#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int ans[2];
    ans[0] = a[0];
    
    ans[1] = a[1];
    int mid1, mid2;

    if(ans[0] % 2 == 0) {
        mid1 = ans[0] / 2;
        for(int i = 2; i < n; i++) {
            if(abs(mid1 - ans[1]) > abs(mid1 - a[i])) {
                ans[1] = a[i];
            }
        }
    } else {
        mid1 = ans[0] / 2;
        mid2 = mid1 + 1;
        //cout << mid1 << " " << mid2 << endl;
        for(int i = 2; i < n; i++) {
            //cout << ans[1] << endl;
            if(abs(mid1 - ans[1]) > abs(mid1 - a[i])) {
                ans[1] = a[i];
            }
            if(abs(mid2 - ans[1]) > abs(mid2 - a[i])) {
                ans[1] = a[i];
            }
        }
    }

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}