#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string w[n];
    for(int i = 0; i < n; i++) cin >> w[i];

    bool ans1 = true;
    for(int i = 0; i < n-1; i++) {
        if(w[i][w[i].length()-1] != w[i+1][0]) ans1 = false;
    }

    sort(w, w+n);
    bool ans2 = true;
    for(int i = 0; i < n-1; i++) {
        if(w[i] == w[i+1]) ans2 = false;
    }

    if(ans1 == true && ans2 == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}