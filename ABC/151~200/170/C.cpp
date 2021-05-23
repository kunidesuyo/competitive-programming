#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    int ans;
    int mini = 1000;

    for(int i = -100; i <= 200; i++) {
        int block = 0;
        for(int j = 0; j < n; j++) {
            if(p[j] == i) block = 1;
        }
        
        if(block != 1) {
            if(abs(i - x) < mini) {
               mini = abs(i - x);
                ans = i;
            } else if (abs(i - x) == mini) {                  
                ans = min(ans, i);
            }
        }
    }

    cout << ans << endl;

    return 0;
}