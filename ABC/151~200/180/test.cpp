#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
    set<long> ans;

    ans.insert(1);
    ans.insert(2);
    ans.insert(3);
    ans.insert(3);

    for(auto x : ans) {
        cout << x << endl;
    }


    return 0;
}
