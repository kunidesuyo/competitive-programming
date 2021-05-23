#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

double dp[101][101][101];

double solve(int a, int b, int c) {
    if(dp[a][b][c]) return dp[a][b][c];
    if(a == 100 || b == 100 || c == 100) return 0;
    double ans = 0;
    ans += (solve(a + 1, b , c) + 1) * a / (a + b + c);
    ans += (solve(a, b + 1 , c) + 1) * b / (a + b + c);
    ans += (solve(a, b , c + 1) + 1) * c / (a + b + c);
    dp[a][b][c] = ans;
    return ans;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    printf("%.9f\n",solve(x, y, z));
       

    return 0;
}