#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {

    int N, A[10009];

    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if(A[j] > A[j + 1]) swap(A[j], A[j + 1]);
        }
    }

    for (int i = 0; i < N; i++) cout << A[i] << endl;
    

    return 0;
}