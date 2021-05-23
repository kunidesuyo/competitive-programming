#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n - 1];
    for(int i = 0; i < n - 1; i++) cin >> a[i];

    int b[n + 1];
    for(int i = 1; i <= n; i++) b[i] = 0;

    for(int i = 0; i < n - 1; i++) {
        b[a[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        cout << b[i] << endl;
    }

    return 0;
}