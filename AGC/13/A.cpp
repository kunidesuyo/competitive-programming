#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    int type[n-1];

    for(int i = 0; i < n - 1; i++) {
        if(a[i] < a[i+1]) {
            type[i] = 1;
        } else if (a[i] > a[i+1]) {
            type[i] = 2;
        } else if(a[i] == a[i+1]) {
            type[i] = 0;
        }
    }

    bool firsttime = true;
    int t1, t2;

    for(int i = 0; i < n - 1; i++) {
        if(type[i] == 0) continue;
        if(firsttime) {
            firsttime = false;
            t1 = type[i];
        } else {
            if(t1 != type[i]) {
                ans++;
                firsttime = true;
            }
        }
    }

    ans++;

    cout << ans << endl;

    return 0;
}