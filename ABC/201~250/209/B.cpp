#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i % 2 != 0) a[i]--;
        total += a[i];
    }

    if(total <= x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}