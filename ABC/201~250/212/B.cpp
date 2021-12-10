#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;

    int x[4];
    for(int i = 0; i < 4; i++) {
        x[i] = s[i] - '0';
    }

    if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) {
        cout << "Weak" << endl;
        return 0;
    }
    
    bool is_weak = true;
    for(int i = 0; i <= 2; i++) {
        if(x[i+1] == (x[i]+1) % 10) {
            continue;
        } else {
            is_weak = false;
        }
    }
    if(is_weak) {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }

    return 0;
}