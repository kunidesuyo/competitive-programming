#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int time1 = a * 60 + b;
    int time2 = c * 60 + d;
    if(time1 <= time2) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }

    return 0;
}