#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int mini = 10000000;
    for(int i = 0; i < n; i++) {
        mini = min(mini, a[i] + b[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int num;
            if(i == j) {
                num = a[i] + b[j];
            } else {
                num = max(a[i], b[j]);
            }
            mini = min(mini, num);
        }
    }

    cout << mini << endl;

    return 0;
}