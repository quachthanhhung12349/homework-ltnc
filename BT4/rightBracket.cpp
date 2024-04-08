#include <bits/stdc++.h>

using namespace std;

void rightBracket(int n, string s, int diff){
	if (n < 0) return;
	if (diff == 0){
		cout << s << endl;	
	}
	string s1 = s+'(', s2 = s+')';
	rightBracket(n-1, s1, diff+1);
	if (diff > 0){
		rightBracket(n-1, s2, diff-1);
	}
}

int main(){
	int n;
	cin >> n;
	rightBracket(n,"",0);
	return 0;
}
