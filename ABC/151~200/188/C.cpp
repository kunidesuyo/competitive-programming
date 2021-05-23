#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    int n;
    cin >> n;
    int num = pow(2, n);
    int a[num][2];

    for(int i = 0; i < num; i++) {
        cin >> a[i][0];
        a[i][1] = i;
    }

    int x;

    for(int i = 0; i < n; i++) {
        x = pow(2,i);
        //cout << i << endl;
        if(i == n - 1) break;
        for(int j = 0; j < num / 2; j += x) {
            if(a[2 * j][0] > a[2 * j + x][0]) {
            } else {
                a[2 * j][0] = a[2 * j + x][0];
                a[2 * j][1] = a[2 * j + x][1];
            }

        }
    }

    int ans;
    if(a[0][0] > a[num / 2][0]) {
        ans = a[num / 2][1];
    } else {
        ans = a[0][1];
    }
    ans++;
    cout << ans << endl;
}