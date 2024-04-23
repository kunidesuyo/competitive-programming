#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> ab(n, vector<int>(n, false));
  vector<vector<int>> cd(n, vector<int>(n, false));
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    ab[a][b] = true;
    ab[b][a] = true;
  }
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    cd[a][b] = true;
    cd[b][a] = true;
  }
  
  vector<int> p(n);
  for(int i = 0; i < n; i++) p[i] = i;
  do{
    bool ok = true;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(ab[i][j] != cd[p[i]][p[j]]) {
          ok = false;
          break;
        }
      }
      if(ok == false) break;
    }
    if(ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }while(next_permutation(all(p)));
  cout << "No" << endl;
  return 0;
}