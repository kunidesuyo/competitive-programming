#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        cout << a[i].second << " ";
    }
    cout << "\n";

    return 0;
}