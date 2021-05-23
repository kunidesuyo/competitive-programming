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
    int x[n], y[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int xy1[2], xy2[2], xy3[2];

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                xy1[0] = x[i];
                xy1[1] = y[i];
                xy2[0] = x[j];
                xy2[1] = y[j];
                xy3[0] = x[k];
                xy3[1] = y[k];
                xy2[0] -= xy1[0];
                xy2[1] -= xy1[1];
                xy3[0] -= xy1[0];
                xy3[1] -= xy1[1];
                if(xy2[0] * xy3[1] == xy3[0] * xy2[1]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}