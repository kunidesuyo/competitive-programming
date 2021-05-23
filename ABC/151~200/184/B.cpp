#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int N, X;
    string S;
    cin >> N >> X;
    cin >> S;

    for(int i = 0; i< N; i++) {
        if(X == 0) {
            if(S[i] == 'o') {
                X++;
            }
        } else {
            if(S[i] == 'o') {
                X++;
            } else {
                X--;
            }
        }
    }

    cout << X << endl;

    return 0;
}