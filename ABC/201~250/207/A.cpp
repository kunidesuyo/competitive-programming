#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a+3, greater<int>());
    cout << a[0] + a[1] << endl;

    return 0;
}