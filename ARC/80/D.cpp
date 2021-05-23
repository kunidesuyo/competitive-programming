#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        for(int j = 0; j < a; j++) {
            q.push(i);
        }
    }

    int c[h][w];
    for(int i = 0; i < h; i++) {
        if(i % 2 == 0) {
            for(int j = w-1; j >= 0; j--) {
                c[i][j] = q.front();
                q.pop();
            }
        } else {
            for(int j = 0; j < w; j++) {
                c[i][j] = q.front();
                q.pop();
            }
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    

    return 0;
}