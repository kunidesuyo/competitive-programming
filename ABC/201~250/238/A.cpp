#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    ll n;
    cin >> n;
    if(pow(2, n) > n*n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}