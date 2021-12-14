#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if(a.length() == b.length()) {
        if(a > b) {
            cout << "GREATER" << endl;
        } else if (a < b) {
            cout << "LESS" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    } else if (a.length() > b.length()){
        cout << "GREATER" << endl;
    } else {
        cout << "LESS" << endl;
    }

    return 0;
}