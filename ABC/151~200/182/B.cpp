#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>



using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];

    int max = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    int gcd;
    int max_gcd = 0;
    int ans = 2;

    for(int i = 2; i <= max; i++) {
        gcd = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] % i == 0) {
                gcd++;
            }
        }
        if(gcd >= max_gcd) {
            max_gcd = gcd;
            ans = i;
        }
    }

    cout << ans << endl;
    

    return 0;
}