#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    string t[3] = {"Sunny", "Cloudy", "Rainy"};

    for(int i = 0; i < 3; i++) {
        if(t[i] == s) {
            cout << t[(i + 1) % 3] << endl;
        }
    }
    
    return 0;
}