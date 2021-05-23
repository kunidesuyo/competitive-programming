  
#include <iostream>
using namespace std;

string S;
long long mod = 1000000007;
long long dp[100009][8];

int main() {
	// Step #1. Input
    long long n;
    cin >> n;
	cin >> S;

    string a = "atcoder";

	// Step #2. Dynamic Programming (DP)
	dp[0][0] = 1;
	for (int i = 0; i < (int)S.size(); i++) {
		for (int j = 0; j <= 7; j++) {
			dp[i + 1][j] += dp[i][j];
			if (S[i] == a[j]) dp[i + 1][j + 1] += dp[i][j];
		}
		for (int j = 0; j <= 7; j++) dp[i + 1][j] %= mod;
	}

	// Step #3. Output the answer
	cout << dp[S.size()][7] << endl;
	return 0;
}