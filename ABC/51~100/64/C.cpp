#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int iro = 8;
    int over = 0;
    vector<int> rate(iro);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < iro; j++) {
            if(400*j <= a[i] && a[i] < 400*(j+1)) {
                rate[j] = 1;
            }
        }
        if(3200 <= a[i]) over++;
    }

    int color = 0;
    for(int i = 0; i < iro; i++) {
        //cout << rate[i];
        if(rate[i] == 1) color++;
    }
    int mini, maxi;

    if(color == 0) {
        mini = 1;
    } else {
        mini = color;
    }

    maxi = color + over;
    cout << mini << " " << maxi << endl;

    return 0;
}