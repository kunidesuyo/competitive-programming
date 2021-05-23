#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n], q[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        q[i] = i + 1;
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(p[i] != q[i]) {
            count++;
        }
    }

    if(count <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}