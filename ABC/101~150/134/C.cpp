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
        a[i].second = i;
    }

    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        if(i == a[n - 1].second) {
            cout << a[n - 2].first << endl;
        } else {
            cout << a[n - 1].first << endl;
        }
    }

    return 0;
}