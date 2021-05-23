#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll x[4];
    for(int i = 0; i < 4; i++) cin >> x[i];

    ll max = x[0] * x[2];

    for(int i = 0; i < 2; i++) {
        for(int j = 2; j < 4; j++) {
            if(x[i] * x[j] > max) {
                max = x[i] * x[j];
            }
        }
        
    }

    cout << max << endl;

    return 0;
}