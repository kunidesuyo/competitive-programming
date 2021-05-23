#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];

    if(m == 0) {
        cout << 1 << endl;
        return 0;
    }

    sort(a, a + m);


    int white[m + 1];

    white[0] = a[0] - 1;
    white[m] = n - a[m-1];

    for(int i = 1; i < m; i++) {
         white[i] = a[i] - a[i-1] - 1;
    }

    int k = 1000000007;

    for(int i = 0; i < m + 1; i++) {
        if(white[i] != 0) {
            k = min(k, white[i]);
        }
    }

    int ans = 0;

    for(int i = 0; i < m + 1; i++) {
        if(white[i] != 0) {
            if(white[i] % k == 0) {
                ans += white[i] / k;
            } else {
                ans += white[i] / k + 1;
            }
        }
    }

    cout << ans << endl;

    
    return 0;
}