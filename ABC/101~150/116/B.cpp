#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int f(int n) {
    if(n % 2 == 0) {
        return n/2;
    } else {
        return 3 * n + 1;
    }
}

int main() {
    int s;
    cin >> s;

    int now = s;
    set<int> ss;
    int m = 1;
    ss.insert(now);
    while(true) {
        now = f(now);
        m++;
        auto itr = ss.find(now);
        if(itr != ss.end()) {
            cout << m << endl;
            return 0;
        }
        ss.insert(now);
    }

    return 0;
}