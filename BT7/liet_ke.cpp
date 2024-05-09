#include <bits/stdc++.h>

using namespace std;

const string s = "abcd";

void recur(string res, int t){
	if (t == 0){
		cout << res << endl;
		return;
	}
	for (int i = 0; i <= 3; i++){
		res.push_back(s[i]);
		recur(res,t-1);
		res.pop_back();
	}
}


int main(){
	
	recur("",3);
}
