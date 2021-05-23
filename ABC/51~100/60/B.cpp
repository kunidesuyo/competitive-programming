#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;

    for(int i = 1; i <= b; i++) {
        if((a * i) % b == c) {
            ans = true;
            break;
        }
    }
    
    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}