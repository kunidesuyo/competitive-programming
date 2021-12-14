#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string w;
    cin >> w;
    vector<int> x(26);

    for(int i = 0; i < w.length(); i++) {
        int a = w[i] - 'a';
        x[a]++;
    }
    bool ans = true;
    for(int i = 0; i < 26; i++) {
        if(x[i] % 2 != 0) ans = false;
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}