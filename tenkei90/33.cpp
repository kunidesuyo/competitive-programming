#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    if(h == 1 || w == 1) {
        cout << max(w, h) << endl;
        return 0;
    }
    
    int num1 = 1 + (h-1) / 2;
    int num2 = 1 + (w-1) / 2;

    cout << num1 * num2 << endl;

    return 0;
}