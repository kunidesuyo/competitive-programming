#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    int h[n];
    for(int i = 0; i < n; i++) h[i] = 0;
    for(int i = 0; i < q; i++) {
        int a;
        cin >> a;
        h[a - 1]++;
    }

    for(int i = 0; i < n; i++) {
        if(q - h[i] >= k) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}