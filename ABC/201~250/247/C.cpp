#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;
int n;

void s(int m) {
    if (m == 1) {
        cout << 1 << " ";
        return;
    }
    s(m-1);
    cout << m << " ";
    s(m-1);
}

int main() {
    cin >> n;
    s(n);
    cout << "\n";
    return 0;
}