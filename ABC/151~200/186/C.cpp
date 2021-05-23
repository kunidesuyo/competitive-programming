#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;


    int out = 0;
    

    for(int x = 1; x <= n; x++){
        int ans = 1;
        int n2 = x;

        while(n2 > 0) {
            if(n2 % 10 == 7) {
                ans = 0;
            }
            n2 /= 10;
        }

        string s;
        int n3 = x;
        int a;

        while(n3 > 0) {
            a = n3 % 8;
            s += to_string(a);
            n3 -= a;
            n3 /= 8;
        }


        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '7') {
                ans = 0;
            }
        }
        
        if(ans == 1) {
            out++;
        } else {
        }

    }

    cout << out << endl;
    

    return 0;
}