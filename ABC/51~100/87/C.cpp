#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[2][n];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int ame = 0;
        for(int j = 0; j <= i; j++) {
            ame += a[0][j];
        }
        for(int j = i; j < n; j++) {
            ame += a[1][j];
        }
        ans = max(ans, ame);
    }

    cout << ans << endl;
    

    return 0;
}