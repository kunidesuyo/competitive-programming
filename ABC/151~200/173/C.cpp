#include <bits/stdc++.h>
#include <cmath>
#include <bitset>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    string c[h];
    for(int i = 0; i < h; i++) {
            cin >> c[i];
    }

    int ans = 0;

    for(int bit = 0; bit < (1<<h); bit++) {
        for(int bit2 = 0; bit2 < (1<<w); bit2++) {
            int count = 0;
            for(int i = 0; i < h; i++) {
                if((bit & (1 << i)) == 0) {
                    for(int j = 0; j < w; j++) {
                        if((bit2 & (1 << j)) == 0){
                            if(c[i][j] == '#') count++;
                        }
                    }
                }
            }
            if(count == k) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}