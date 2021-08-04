#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int p;
    cin >> p;

    int ans = 0;
    int kouka = 1;
    for(int i = 1; i <= 10; i++) {
        kouka *= i;
    }

    for(int i = 10; i >= 1; i--) {
        int mai;
        mai = p / kouka;
        mai = min(10, mai);
        ans += mai;
        p -= kouka * mai;
        if(p==0) break;
        kouka /= i;
    }
    cout << ans << endl;

    return 0;
}