#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n; 
    pair<int, int> x[n];
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        x[i].first = a;
        x[i].second = i;
    }

    int n1 = n / 2 - 1;
    int n2 = n / 2;

    sort(x, x+n);

    int ans1 = x[n2].first;
    int ans2 = x[n1].first;

    int ans[n];

    for(int i = 0; i < n; i++) {
        if(i <= n1) {
            ans[x[i].second] = ans1;
        } else {
            ans[x[i].second] = ans2;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}