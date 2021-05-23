#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k, s;
    cin >> n >> k >> s;

    for(int i = 0; i < k; i++) {
        printf("%d ", s);
    }
    for(int i = 0; i < n - k; i++) {
        if(s == 1e9) {
            printf("1 ");
        } else {
            printf("%d ", s+1);
        }
    }
    cout << "\n";

    return 0;
}