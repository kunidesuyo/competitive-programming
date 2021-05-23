#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(s.find(a) == s.end()) {
            s.insert(a);
        } else {
            s.erase(a);
        }
    }

    cout << s.size() << endl;

    return 0;
}