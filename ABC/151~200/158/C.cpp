#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 1; i <= 1009; i++) {
        if((int)(i * 0.08) == a && (int)(i * 0.1) == b) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    
    

    return 0;
}