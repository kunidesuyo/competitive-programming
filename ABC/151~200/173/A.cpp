#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;


    cout << (1000 - (n % 1000)) % 1000 << endl;

    return 0;
}