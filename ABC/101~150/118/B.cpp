#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0 ; j < m; j++) {
            a[i][j] = false;
        }
    }
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;
            x--;
            a[i][x] = true;
        }
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        bool like = true;
        for(int j = 0; j < n; j++) {
            if(a[j][i] == false) like = false;
        }
        if(like) ans++;
    }

    cout << ans << endl;

    return 0;
}