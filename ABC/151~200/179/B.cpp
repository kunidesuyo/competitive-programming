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
    int d[n][2];
    for(int i = 0; i < n; i++) cin >> d[i][0] >> d[i][1];

    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(d[i][0] == d[i][1]) {
            count++;
        } else {
            count = 0;
        }
        if(count == 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}