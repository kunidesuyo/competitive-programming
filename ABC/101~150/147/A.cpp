#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    if(a[0] + a[1] + a[2] >= 22) {
        cout << "bust" << endl;
    } else {
        cout << "win" << endl;
    }
    

    return 0;
}