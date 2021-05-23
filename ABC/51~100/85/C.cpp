#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    if(y % 1000 != 0) {
        cout << -1 << " " << -1 << " " << -1 << endl;
    }

    for(int i = 0; 10000*i <= y; i++) {
        for(int j = 0; 10000*i + 5000*j <= y; j++) {
            if((y - 10000*i - 5000*j) / 1000 == n-i-j){
                cout << i << " " << j << " " << n-i-j << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;


    return 0;
}