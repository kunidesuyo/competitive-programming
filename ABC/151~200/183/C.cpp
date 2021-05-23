#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int T[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> T[i][j];
        }
    }

    int index[n];
    for(int i = 0; i < n; i++) {
        index[i] = i;
    }

    int ans = 0;
    do {
        int t = 0;
        for(int i = 0; i < n - 1; i++) {
            t += T[index[i]][index[i + 1]];
        }
        t += T[index[n-1]][index[0]];
        if(t == k) ans++;

    }while(next_permutation(index + 1, index + n));

    cout << ans << endl;

    return 0;
}