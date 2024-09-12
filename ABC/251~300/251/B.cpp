#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    int a[n+2];
    for(int i = 0; i < n; i++) cin >> a[i];
    a[n] = 0;
    a[n+1] = 0;

    set<int> ans;

    for(int j = 0; j < n; j++) {
        for(int k = j+1; k < n+1; k++) {
            for(int l = k+1; l < n+2; l++) {
                if(a[j]+a[k]+a[l] <= w) ans.insert(a[j]+a[k]+a[l]);
            }
        }
    }
    cout << ans.size() << endl;

    return 0;
}