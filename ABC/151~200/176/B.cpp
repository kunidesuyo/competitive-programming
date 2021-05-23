#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string n;
    cin >> n;

    int total = 0;
    char c;
    
    for(int i = 0; i < n.length(); i++) {
        c = n[i];
        total += atoi(&c);
    }

    if(total % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}