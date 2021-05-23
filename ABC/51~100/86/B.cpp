#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string s;
    s = a + b;

    int num = atoi(s.c_str());

    for(int i = 1; i * i <= num; i++) {
        if(i * i == num) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}