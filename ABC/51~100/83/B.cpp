#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int num = 0, x = i;
        while(x != 0) {
            num += x % 10;
            x /= 10;
        }
        if(a <= num && num <= b) ans += i;
    }   
    cout << ans << endl;

    return 0;
}