#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;


    int mireru = 2 * d + 1;

    if(n % mireru == 0) {
        cout << n / mireru << endl;
    } else {
        cout << n / mireru + 1 << endl;
    }

    return 0;
}