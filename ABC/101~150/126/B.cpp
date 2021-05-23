#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int a, b;
    a = (s[0]-'0') * 10 + s[1]-'0';
    b = (s[2]-'0') * 10 + s[3]-'0';

    if(0<a && 12>=a&&0<b && 12>=b) {
        cout << "AMBIGUOUS" << endl;
    } else if(0<b && 12>=b) {
        cout << "YYMM" << endl;
    } else if(0<a && 12>=a) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }


    return 0;
}