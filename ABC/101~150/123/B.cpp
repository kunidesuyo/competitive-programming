#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n = 5;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);


    int ans = 100000;
    do {
        int x = 0;
        for(int i = 0; i < n-1; i++) {
            x += (a[i] / 10) * 10;
            if(a[i] % 10 != 0) x += 10;
        }
        x += a[n-1];
        //cout << x << endl;
        ans = min(ans, x);
    }while(next_permutation(a, a+n));
    
    
    cout << ans << endl;

    return 0;
}