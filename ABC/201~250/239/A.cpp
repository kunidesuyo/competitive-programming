#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    ll h;
    cin >> h;

    cout << fixed << setprecision(10) << sqrt(h * (12800000 + h)) << endl;

    return 0;
}