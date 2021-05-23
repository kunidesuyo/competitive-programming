#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    bool ans = false;

    do
    {
        if(a[2] - a[1] == a[1] - a[0]) {
            ans = true;
        }
    } while (next_permutation(a, a+3));
    
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}