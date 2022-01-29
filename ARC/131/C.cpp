#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total ^= a[i];
    }

    if(n % 2 != 0) {
        cout << "Win" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == total) {
            cout << "Win" << endl;
            return 0;
        }
    }
    cout << "Lose" << endl;

    /*vector<int> keta;
    int c = 1;
    for(int i = 0; c <= 1e9; i++) {
        keta.push_back(0);
        c *= 2;
    }

    int m = keta.size();

    int bit[n][m];
    for(int i = 0; i < n; i++) {
        int num = a[i];
        for(int j = 0; j < m; j++) {
            bit[i][j] = num % 2;
            num /= 2;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << bit[i][j];
        }
        cout << "\n";
    }*/

    return 0;
}