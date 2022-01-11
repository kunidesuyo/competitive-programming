#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x;
    cin >> x;

    if(0<=x && x < 40) {
        cout << 40-x << endl;
    } else if (40 <= x && x < 70) {
        cout << 70-x << endl;
    } else if(70 <= x && x <90) {
        cout << 90-x << endl;
    } else {
        cout << "expert" << endl;
    }


    return 0;
}