#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);

    int numa = 0;
    int numb = 0;
    int ans = 1000000000;
    while(numa < n && numb < m) {
        int v = b[numb] - a[numa];
        ans = min(ans, abs(v));
        if(v <= 0) {
            numb++;
        } else {
            numa++;
        }
    }

    /*if(numa == n-1) {
        while(numb < m) {
            int v = b[numb] - a[numa];
            ans = min(ans, abs(v));
            numb++;
        }
    } else {
        while(numa < n) {
            int v = b[numb] - a[numa];
            ans = min(ans, abs(v));
            numa++;
        }
    }*/

    cout << ans << endl;
    

    return 0;
}