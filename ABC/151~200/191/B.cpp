#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a != x) {
            cout << a << " ";
        }
    }
    cout << "\n";

    return 0;
}