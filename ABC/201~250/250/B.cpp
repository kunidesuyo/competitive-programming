#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < a*n; i++) {
        int y = i / a;
        for(int j = 0; j < b*n; j++) {
            int x = j / b;
            if((x+y) % 2 == 0) {
                cout << ".";
            } else {
                cout << "#";
            }
        }
        cout << "\n";
    }

    return 0;
}