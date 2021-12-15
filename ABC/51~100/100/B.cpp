#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    int ans = 1;
    for(int i = 0; i < d; i++) {
        ans *= 100;
    }
    if(n == 100) n = 101;
    ans *= n;
    cout << ans << endl;
    

    return 0;
}