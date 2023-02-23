#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1], b[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    /*int ans1 = 0;
    int ans2 = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++ ){
            if(a[i] == b[j]) {
                if(i == j) {
                    ans1++;
                } else {
                    ans2++;
                }
            }
        }
    }
    cout << ans1 << endl;
    cout << ans2 << endl;*/

    map<int, int> aa;
    for(int i = 1; i <= n; i++) {
        aa[a[i]] = i;
    }
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 1; i <= n; i++) {
        if(aa[b[i]] != 0) {
            if(aa[b[i]] == i) {
                ans1++;
            } else {
                ans2++;
            }
        }
    }
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}