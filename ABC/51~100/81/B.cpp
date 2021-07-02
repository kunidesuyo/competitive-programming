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

    int ans = 1e9;
    for(int i = 0; i < n; i++) {
        int num = 0;
        while(a[i] > 1) {
            if(a[i] % 2 == 0) {
                num++;
                a[i] /= 2;
            } else {
                break;
            }
        }
        ans = min(ans, num);
    }
    cout << ans << endl;

    return 0;
}