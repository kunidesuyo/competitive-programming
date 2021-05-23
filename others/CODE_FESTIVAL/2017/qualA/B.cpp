#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    bool find = false;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            int num;
            num = i * (m-j) + j * (n-i);
            if(num == k) {
                find = true;
                break;
            }
        }
        if(find) break;
    }

    cout << (find ? "Yes" : "No") << endl;

    return 0;
}