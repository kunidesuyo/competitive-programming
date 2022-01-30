#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string a = {'0'};

    queue<int> left;
    stack<int> right;
    int now = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            left.push(now);
            now = i+1;
        } else {
            right.push(now);
            now = i+1;
        }
    }

    while(!left.empty()) {
        int num = left.front();
        left.pop();
        cout << num << " ";
    }

    cout << now << " ";

    while(!right.empty()) {
        int num = right.top();
        right.pop();
        cout << num << " ";
    }
    cout << "\n";


    /*int index = 0;
    for(int i = 0; i < n; i++) {
        char c = '0' + i + 1;
        //cout << c << endl;
        int l = a.length();
        if(s[i] == 'L') {
            a = a.substr(0, index) + c + a.substr(index, l-index);
        } else {
            a = a.substr(0, index+1) + c + a.substr(index+1, l-index-1);
            index++;
        }
        //cout << a << endl;
    }

    int l = a.length();
    for(int i = 0; i < l; i++) {
        if(i != 0) cout << " ";
        int x = a[i] - '0';
        cout << x;
    }
    cout << "\n";*/

    return 0;
}