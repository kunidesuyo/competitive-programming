#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x;
    cin >> x;

    int ans = 0;

    for(int i = 1; i <= 1000; i++) {
        int num = i;
        for(int j = 2; j <= 10; j++) {
            num *= i;
            if(num <= x) ans = max(ans, num);
        }
    }
    cout << ans << endl;

    return 0;
}