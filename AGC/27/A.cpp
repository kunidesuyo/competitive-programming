#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    int t = 0;
    for(int i = 0; i < n; i++) {
        t += a[i];
        if(t > x) {
            cout << i << endl;
            return 0;
        } else if (t == x) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << n-1 << endl;

    return 0;
}