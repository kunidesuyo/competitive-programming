#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i<= n; i++) {
        cin >> a[i];
    }

    vector<int> b;

    if(n % 2 == 0) {
        for(int i = 0; n - 2 * i > 0; i++) {
            b.push_back(a[n - 2 * i]);
        }
        for(int i = 0; 2 * i + 1 <= n;i++) {
            b.push_back(a[2 * i + 1]);
        }
    } else {
        for(int i = 0; n - 2 * i > 0; i++) {
            b.push_back(a[n - 2 * i]);
        }
        for(int i = 1; 2 * i <= n;i++) {
            b.push_back(a[2 * i]);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << b[i];
        if(i != n-1) cout << " ";
    }
    cout << "\n";

    return 0;
}