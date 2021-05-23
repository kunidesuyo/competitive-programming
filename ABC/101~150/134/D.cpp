#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<bool> ans(n+1, false);
    int m = 0;

    for(int i = n; i>= 1; i--) {
        if(i*2 > n) {
            if(a[i] == 1) {
                ans[i] = true;
                m++;
            }
        } else {
            int num = 0;
            for(int j = 1; i*j <= n; j++) {
                if(ans[i*j] == true) num++;
            }
            if(num % 2 != a[i]) {
                ans[i] = true;
                m++;
            }
        }
    }

    cout << m << endl;
    if(m==0) return 0;

    for(int i = 1; i <= n; i++) {
        if(ans[i] == true) {
            cout << i << " ";
        }
    }

    cout << "\n";


    return 0;
}