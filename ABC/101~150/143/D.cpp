#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int l[n];
    for(int i = 0; i < n; i++) cin >> l[i];

    sort(l, l+n, greater<int>());



    int ans = 0;
    
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                int a = l[i];
                int b = l[j];
                int c = l[k];
                if(a < b + c) {
                    ans++;
                } else {
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}