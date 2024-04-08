#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	while (b != 0){
		a = a%b;
		swap(a,b);
	}
	return a;
}

int gcd_recursion(int a, int b){
	if (a < b) return gcd(b,a);
	if (b == 0) return a;
	return gcd(b,a%b);
}
int a, b;

int main(){
	cin >> a >> b;
	cout << gcd(a,b) << " " << gcd_recursion(a,b);
	return 0;
}
