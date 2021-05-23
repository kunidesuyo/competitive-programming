#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int N;
    cin >> N;

    if(N % 2 == 0) {
        cout << "White" << endl;
    } else {
        cout << "Black" << endl;
    }

    return 0;
}