#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int first, last, sum;
    first = l + 1 - 1;
    last = l + n - 1;
    sum = n * l + n * (n + 1) / 2 - n;

    if(first < 0 && last < 0) {
        cout << sum - last << endl;
    } else if(first >= 0 && last >= 0) {
        cout << sum - first << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}