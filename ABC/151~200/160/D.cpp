#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> ans(n+1);

    for(int i = 1; i <= n-1; i++) {
        for(int j = i+1; j <= n; j++) {
            int num = j - i;
            num = min(num, abs(x-i) + 1 + abs(y-j));
            num = min(num, abs(y-i) + 1 + abs(x-j));
            ans[num]++;
        }
    }

    for(int i = 1; i <= n-1; i++) {
        cout << ans[i] << endl;
    } 

    return 0;
}