#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a[10];
    for(int i = 0; i < 10; i++) cin >> a[i];

    int now = 0;
    for(int i = 0; i < 3; i++) {
        now = a[now];
    }
    cout << now << endl;

    return 0;
}