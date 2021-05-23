
#include <bits/stdc++.h>


using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    cout << fixed << setprecision(15);

    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];


    long m, y, c;

    m = 0;
    for(int i = 0; i < n; i++) {
        m += abs(x[i]);
    }

    cout << m << endl;

    y = 0;
    for(int i = 0; i < n; i++) {
        y += abs(x[i]) * (long)abs(x[i]);
    }

    cout << sqrt(y) << endl;


    c = 0;
    for(int i = 0; i < n; i++) {
        if(abs(x[i]) > c) {
            c = abs(x[i]);
        }
    }

    cout << c << endl;


    return 0;
}