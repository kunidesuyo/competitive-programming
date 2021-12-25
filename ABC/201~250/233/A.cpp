#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    y -= x;
    if(y <= 0) {
        cout << "0" << endl;
        return 0;
    }

    int ans = 0;
    while(y > 0) {
        ans++;
        y -= 10;
    }
    cout << ans << endl;
    return 0;
}