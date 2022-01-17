// ABC 106B
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
    int ans = 0;
    for(int i = 1; i <= n; i+=2) {
        int x = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) x++;
        }
        if(x == 8) ans++;
    }

    cout << ans << endl;

    return 0;
}