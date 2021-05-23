#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int x1 = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i % 2 != 0) x1 += a[i];
        sum += a[i];
    }



    x1 = sum - 2*x1;
    cout << x1 << " ";
    a[0] -= x1/2;
    for(int i = 1; i < n; i++) {
        cout << a[i-1] * 2 << " ";
        a[i] -= a[i-1];
    }
    cout << "\n";





    return 0;
}