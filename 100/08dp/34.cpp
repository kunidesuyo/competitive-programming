#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()



using namespace std;

vector<int> memo(50, -1);

int fib(int n) {
    if(n == 0 || n == 1) return 1;
    if(memo[n] != -1) return memo[n];
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main() {
    int n;
    cin >> n;
    memo[0] = 1;
    memo[1] = 1;
    cout << fib(n) << endl;


    return 0;
}