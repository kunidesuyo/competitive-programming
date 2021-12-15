#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[a[i]] == i) ans++;
    }
    cout << ans/2 << endl;


    return 0;
}