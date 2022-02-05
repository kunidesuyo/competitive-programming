#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(1<=j && j<=a){
                if(1<=i && i <=b) {
                    cout << 0;
                } else {
                    cout << 1;
                }
            } else {
                if(1<=i && i <=b) {
                    cout << 1;
                } else {
                    cout << 0;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}