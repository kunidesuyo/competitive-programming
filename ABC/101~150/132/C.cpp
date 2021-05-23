#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n];
    for(int i = 0; i < n; i++) cin >> d[i];

    sort(d, d + n);

    int mid = n / 2;

    cout << d[mid] - d[mid - 1] << endl;

    return 0;
}
