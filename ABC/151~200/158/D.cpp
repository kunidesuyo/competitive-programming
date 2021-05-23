#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    string fb[2];
    int r = 0;
    for(int i = 0; i < q; i++) {
        string query, query2, query3;
        cin >> query;
        if(query[0] == '1') {
            r++;
        } else if(query[0] == '2') {
            cin >> query2 >> query3;
            if(query2[0] == '1') {
                fb[r%2].push_back(query3[0]);
            } else if(query2[0] == '2')
                fb[(r+1)%2].push_back(query3[0]);
        }
        /*cout << i << " ";
        cout << query << " ";
        cout << query2 << " ";
        cout << query3 << " ";
        cout <<  fb[0] << " ";
        cout << fb[1] << endl;*/
    }

    reverse(fb[r%2].begin(), fb[r%2].end());
    if(r%2==1) reverse(s.begin(), s.end());

    cout << fb[r%2] << s << fb[(r+1)%2] << endl;

    return 0;
}