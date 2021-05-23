#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    ll total = 0;
    
    for(int i = 0; i < n; i++) {
        total += (a[i] + b[i]) * (b[i] - a[i] + 1) / 2;
    }

    cout << total << endl;


    return 0;
}