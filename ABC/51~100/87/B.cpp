#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;
    for(int i = 0; i <= a; i++) {
        for(int j = 0; j <= b; j++) {
            for(int k = 0; k <= c; k++) {
                if(500*i + 100*j+ 50*k == x) ans++;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}