#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int m = min(n, 8);
    vector<int> amari(200, -1);

    int b_bit, c_bit;
    bool exist = false;

    for(int bit = 0; bit < 1<<m; bit++) {
        int num = 0;
        for(int i = 0; i < m; i++) {
            if(bit & 1<<i) {
                num += a[i];
                num %= 200;
            }
        }
        if(amari[num] == -1) {
            amari[num] = bit;
        } else {
            b_bit = amari[num];
            c_bit = bit;
            exist = true;
        }
    }

    if(exist == false) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    int b_num = 0, c_num = 0;
    vector<int> b, c;

    for(int i = 0; i < m; i++) {
        if(b_bit & 1<<i) {
            b_num++;
            b.push_back(i+1);
        }
        if(c_bit & 1<<i) {
            c_num++;
            c.push_back(i+1);
        }
    }

    cout << b_num << " ";
    for(auto x : b) {
        cout << x << " ";
    }
    cout << "\n";

    cout << c_num << " ";
    for(auto x : c) {
        cout << x << " ";
    }
    cout << "\n";


    

    return 0;
}