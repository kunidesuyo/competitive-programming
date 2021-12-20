#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    if(1 <= n && n <= 125) {
        cout << 4 << endl;
    } else if (126 <= n && n <= 211) {
        cout << 6 << endl;
    } else {
        cout << 8 << endl;
    }

    return 0;
}