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

    ll num = 2;
    for(int i = 0; i < 30; i++) {
        num *= 2;
    }
    if(-num <= n && n <num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}