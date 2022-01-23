#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    string s;
    cin >>s;
    int a, b;
    cin >> a >> b;
    a--;b--;
    swap(s[a], s[b]);
    cout << s << endl;

    return 0;
}