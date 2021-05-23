#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    bool match;

    for(int h = 0; h < n-m+1; h++) {
        for(int w = 0; w < n-m+1; w++) {
            match = true;
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < m; j++) {
                    if(a[i+h][j+w] != b[i][j]) {
                        match = false;
                    }
                }
                if(!match) break;
            }
            if(match) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    

    return 0;
}