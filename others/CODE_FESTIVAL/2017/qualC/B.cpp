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

    int ans = 1;
    int x = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            x *= 2;
        }
        ans *= 3;
    }
    cout << ans - x << endl;
    return 0;
}