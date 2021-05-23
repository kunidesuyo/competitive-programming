#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll count = 0;


    for(ll i = 1; i < n; i++) {
        count += (n-1)/i;
    }

    cout << count << endl;
    

    return 0;
}