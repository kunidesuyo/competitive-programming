#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, w;
    cin >> a >> b >> w;

    int weight = w * 1000;

    int maxi, mini;
    maxi = weight / a;
    mini = weight / b;
    if(weight % b != 0) mini++;

    if(mini > maxi) {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }

    cout << mini << " "<< maxi << endl;

    return 0;
}