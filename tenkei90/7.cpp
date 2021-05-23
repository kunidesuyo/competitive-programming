#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int q;
    cin >> q;
    int b[q];
    for(int i = 0; i < q; i++) cin >> b[i];


    for(int i = 0; i < q; i++) {
        int index = lower_bound(a, a+n, b[i]) - a;
        if(index == 0) {
            cout << abs(b[i] - a[index]) << endl;
        } else if(index == n) {
            cout << abs(b[i] - a[n-1]) << endl;
        } else {
            int out = abs(b[i] - a[index]);
            out = min(out, abs(b[i] - a[index-1]));
            cout << out << endl;
        }
    }


    return 0;
}