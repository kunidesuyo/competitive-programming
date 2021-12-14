#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    string a[h];
    for(int i = 0; i < h; i++) cin >> a[i];

    for(int i = 0; i < w+2; i++) cout << "#";
    cout << "\n";
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(j == 0) cout << "#";
            cout << a[i][j];
            if(j == w-1) cout << "#";
        }
        cout << "\n";
    }
    for(int i = 0; i < w+2; i++) cout << "#";
    cout << "\n";

    return 0;
}