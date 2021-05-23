#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    bool ans = false;

    if(s.size() == 1) {
        if(s == "8") {
            ans = true;
        }
    } else if (s.size() == 2) {
        if(stoi(s) % 8 == 0) ans = true;
        swap(s[0], s[1]);
        if(stoi(s) % 8 == 0) ans = true;
    } else {
        int count[10];
        for(int i = 0; i < 10; i++) count[i] = 0;
        for(int i = 0; i < s.size(); i++) {
            count[s[i] - '0']++;
        }
        for(int i = 0; i < 1000; i += 8) {
            int x[10];
            for(int j = 0; j < 10; j++) {
                x[j] = count[j];
            }
            /*if(i == 0) {
                for(int j = 0; j < 10; j++) {
                    cout << x[j];
                }
                cout << "\n";
            }*/
            string y;
            y = to_string(i);
            if(i < 10) {
                y.push_back('0');
                y.push_back('0');
            }
            if(i < 100) {
                y.push_back('0');
            }
            for(int j = 0; j < 3; j++) {
                x[y[j] - '0']--;
            }

            /*cout << i << " ";
            if(true) {
                for(int j = 0; j < 10; j++) {
                    cout << x[j];
                }
                cout << "\n";
            }*/

            bool can = true;
            for(int j = 0; j < 10; j++) {
                if(x[j] < 0) {
                    can = false;
                    break;
                }
            }
            if(can) {
                ans = true;
                break;
            }
        }
    }

    cout << ((ans) ? "Yes" : "No") << endl;

    return 0;
}