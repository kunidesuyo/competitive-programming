#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string x;
    cin >> x;

    int n = x.length();
    stack<char> s;

    for(int i = 0; i < n; i++) {
        if(x[i] == 'S') {
            s.push(x[i]);
        } else {
            if(s.size() > 0 && s.top() == 'S') {
                s.pop();
            } else {
                s.push(x[i]);
            }
        }
    }

    cout << s.size() << endl;

    return 0;
}