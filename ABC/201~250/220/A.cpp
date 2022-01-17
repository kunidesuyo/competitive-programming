#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}