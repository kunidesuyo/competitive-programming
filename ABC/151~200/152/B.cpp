#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    if(a <= b) {
        for(int i = 0; i < b; i++) {
            ans += pow(10, i) * a;
        }
    } else {
        for(int i = 0; i < a; i++) {
            ans += pow(10, i) * b;
        }
    }

    cout << ans << endl;

    return 0;
}