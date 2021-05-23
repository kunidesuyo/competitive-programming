#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int t[q], x[q], y[q];
    for(int i = 0; i < q; i++) {
        cin >> t[i] >> x[i] >> y[i];
        x[i]--; y[i]--;
    }

    int shift = 0;

    for(int i = 0; i < q; i++) {
        if(t[i] == 2) {
            shift++;
        } else if(t[i] == 1) {
            int xx = x[i] - shift;
            while(xx < 0) xx += n;       
            int yy = y[i] - shift;
            while(yy < 0) yy += n;
            //swap(a[xx], a[yy]);
            int val = a[xx];
            a[xx] = a[yy];
            a[yy] = val;
        } else if(t[i] == 3){
            int xx = x[i] - shift;
            while(xx < 0) xx += n;
            cout << a[xx] << endl;
        }
    }

    return 0;
}