#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    if((n-1)%(k-1)==0) {
        cout << (n-1)/(k-1) << endl;
    } else {
        cout << (n-1)/(k-1)+1 << endl;
    }

    return 0;
}