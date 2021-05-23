#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n], q[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    int x[n];
    for(int i = 0; i < n; i++) x[i] = i+1;

    int nump = 0, numq = 0;
    for(int i = 0; i < n; i++) {
        nump += p[i] * pow(10,n - i - 1);
        numq += q[i] * pow(10,n - i - 1);
    }

    int a = 0, b = 0;
    int number = 0;
    
    do{
        number++;
        int numx = 0;
        for(int i = 0; i < n; i++) {
            numx += x[i] * pow(10,n - i - 1);
        }
        if(numx == nump) a = number;
        if(numx == numq) b = number;
    } while(next_permutation(x, x+n));


    cout << abs(a-b) << endl;




    return 0;
}