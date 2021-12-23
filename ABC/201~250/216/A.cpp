#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int x = s[n-1] - '0';

    cout << s.substr(0, n-2);
    if(0 <= x && x <= 2) {
        cout << "-";
    } else if(7 <= x && x <= 9) {
        cout << "+";
    }
    cout << "\n";

    return 0;
}