#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(s[n-1] == 'o') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
 
    return 0;
}