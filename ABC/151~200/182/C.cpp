#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll N;
    cin >> N;

    int count[3] = {0};

    while(N) {
        count[N % 10 % 3]++;
        N /= 10;
    }

    int total = count[1] + count[2] * 2;
    int count_total = count[0] + count[1] + count[2];
    int ans;

    if(total % 3 == 0) {
        ans = 0;
    } else if (total % 3 == 1) {
        if(count[1] >= 1 && count_total > 1) {
            ans = 1;
        } else {
            if(count[2] >= 2 && count_total > 2) {
                ans = 2;
            } else {
                ans = -1;
            }
        }
    } else if (total % 3 == 2) {
        if(count[2] >= 1 && count_total > 1) {
            ans = 1;
        } else {
            if(count[1] >= 2 && count_total > 2) {
                ans = 2;
            } else {
                ans = -1;
            }
        }
    }

    cout << ans << endl;



    

    return 0;
}