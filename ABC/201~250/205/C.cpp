#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > 0 && b > 0) {
        if(a > b) {
            cout << ">" << endl;
        } else if(a < b) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
    } else if(a > 0 && b < 0) {
        if(c % 2 == 0) {
            if(a > abs(b)) {
            cout << ">" << endl;
            } else if(a < abs(b)) {
            cout << "<" << endl;
            } else {
            cout << "=" << endl;
            }
        } else {
            cout << ">" << endl;
        }
    } else if(a > 0 && b == 0) {
        cout << ">" << endl;
    } else if(a < 0 && b > 0) {
        if(c % 2 == 0) {
            if(abs(a) > b) {
            cout << ">" << endl;
            } else if(abs(a) < b) {
            cout << "<" << endl;
            } else {
            cout << "=" << endl;
            }
        } else {
            cout << "<" << endl;
        }
    } else if(a < 0 && b < 0) {
        if(c % 2 == 0) {
            if(a > b) {
            cout << ">" << endl;
            } else if(a < b) {
            cout << "<" << endl;
            } else {
            cout << "=" << endl;
            }
        } else {
            if(a > b) {
            cout << "<" << endl;
            } else if(a < b) {
            cout << ">" << endl;
            } else {
            cout << "=" << endl;
            }
        }
    } else if(a < 0 && b == 0) {
        if(c % 2 == 0) {
            cout << ">" << endl;
        } else {
            cout << "<" << endl;
        }
    } else if(a == 0 && b > 0) {
        cout << "<" << endl;
    } else if(a == 0 && b < 0) {
        if(c % 2 == 0) {
            cout << "<" << endl;
        } else {
            cout << ">" << endl;
        }
    } else if(a == 0 && b == 0) {
        cout << "=" << endl;
    }

    return 0;
}