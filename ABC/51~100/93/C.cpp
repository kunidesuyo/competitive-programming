#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+2];
    a[0] = 0;
    a[n+1] = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += abs(a[i-1]-a[i]);
    }
    sum += abs(a[n] - a[n+1]);

    for(int i = 1; i <= n; i++) {
        if(i==1) {
            sum -= abs(a[0]-a[1]) + abs(a[1]-a[2]);
            sum += abs(a[0]-a[2]);
            cout << sum << endl;
        } else {
            sum -= abs(a[i-2]-a[i]) + abs(a[i]-a[i+1]);
            sum += abs(a[i-2]-a[i-1]) + abs(a[i-1]-a[i+1]);
            cout << sum << endl; 
        }
    }

    



    return 0;
}