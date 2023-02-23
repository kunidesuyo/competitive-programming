#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    while(true) {
        v -= a;
        if(v < 0) {
            cout << "F" << endl;
            return 0;
        }
        v -= b;
        if(v < 0) {
            cout << "M" << endl;
            return 0;

        }
        v -= c;
        if(v < 0) {
            cout << "T" << endl;
            return 0;

        }
    }

    return 0;
}