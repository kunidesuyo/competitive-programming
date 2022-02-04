#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ki = 0;
    int gu = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            ki++;
        } else {
            gu++;
        }
    }

    if(gu == n) {
        cout << "second" << endl;
    } else {
        cout << "first" << endl;
    }

    return 0;
}