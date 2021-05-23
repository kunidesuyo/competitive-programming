#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s[3];
    int l[3];
    int index[3];
    for(int i = 0; i < 3; i++) {
        cin >> s[i];
        l[i] = s[i].length();
        index[i] = 0;
    }

    int i = 0;

    while(true) {
    
        /*cout << i << " ";
        for(int j = 0; j < 3; j++) {
            cout << index[j] << " ";
        }
        cout << "\n";*/

        if(l[i]-1 < index[i]) {
            if(i == 0) {
                cout << 'A' << endl;
                return 0;
            } else if(i == 1) {
                cout << 'B' << endl;
                return 0;
            } else if(i == 2) {
                cout << 'C' << endl;
                return 0;

            }
        }
        if(s[i][index[i]] == 'a') {
            index[i]++;
            i = 0;
        } else if(s[i][index[i]] == 'b') {
            index[i]++;
            i = 1;
        } else if(s[i][index[i]] == 'c') {
            index[i]++;
            i = 2;
        }
        
    }



    return 0;
}