#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if(x <= a) {
        cout << 1 << endl;
    } else if(a < x && x <= b) {
        cout << setprecision(10) <<  (double)c/(double)(b-a) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}