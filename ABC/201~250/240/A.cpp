#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = abs(a-b);
    if(c == 1 || c == 9 || c == 11) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}