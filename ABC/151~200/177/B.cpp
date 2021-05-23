#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int min_diff = s.size();

    for(int i = 0; i <= s.size() - t.size(); i++) {
        int diff = 0;
        for(int j = 0; j < t.size(); j++) {
            if(s[i + j] != t[j]) {
                diff++;
            }
        }
        if(min_diff > diff) min_diff = diff;
    }

    cout << min_diff << endl;

    return 0;
}