#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= 1000000000; i++) {
        ans += i;
        if(ans >= n) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}