#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    
    int x3 = -dy + x2;
    int y3 = dx + y2;

    dx = x3 - x2;
    dy = y3 - y2;

    int x4 = -dy + x3;
    int y4 = dx + y3;

    cout << x3 << " ";
    cout << y3 << " ";
    cout << x4 << " ";
    cout << y4 << " " << endl;

    return 0;
}