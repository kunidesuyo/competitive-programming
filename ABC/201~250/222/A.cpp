#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    string n;
    cin >> n;
    while(n.length() != 4) {
        n = '0' + n;
    }
    cout << n << endl;

    return 0;
}