#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double x, y;
    x = a / (sqrt(a*a + b*b));
    y = b / (sqrt(a*a + b*b));

    cout << setprecision(10) << x << " " << y << endl;

    return 0;
}