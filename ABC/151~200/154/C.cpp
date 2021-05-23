#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    set<int> s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }


    if(s.size() == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    //ac sarenai imihumei

    return 0;
}