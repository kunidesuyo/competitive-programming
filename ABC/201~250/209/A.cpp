#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int num = b-a+1;
    if(num < 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << b-a+1 << endl;   

    return 0;
}