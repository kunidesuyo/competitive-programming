#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int l[n];
    for(int i = 0; i < n; i++) cin >> l[i];

    int ban = 0;
    int ans = 0;

    for(int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                ban = 0;
                int num[3];
                num[0] = i;
                num[1] = j;
                num[2] = k;
                int max = 0;
                int max_num;
                for(int x = 0; x < 3; x++) {
                    if(max < l[num[x]]) {
                        max = l[num[x]];
                        max_num = num[x];
                    }
                }
                int no_max_sum = 0;
                for(int x = 0; x < 3; x++) {
                    if(max_num != num[x]) {
                        no_max_sum += l[num[x]];
                    }
                }
                if(max >= no_max_sum) {
                    ban = 1;
                }

                for(int x = 0; x < 2; x++) {
                    for(int y = x + 1; y < 3; y++) {
                        if(l[num[x]] == l[num[y]]) {
                            ban = 1;
                        }
                    }
                }

                if(ban != 1) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    

    return 0;
}