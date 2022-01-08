#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int f(int x) {
    return x*x + 2 * x + 3;
}

int main() {
    int t;
    cin >> t;

    cout << f(f(f(t)+t) + f(f(t))) << endl;

    return 0;
}