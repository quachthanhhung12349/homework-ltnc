#include <bits/stdc++.h>

using namespace std;

int bin_search(vector <int> v, int l, int r, int k){
	if (l > r) return -1;
	int mid = (l+r)/2;
	if (v[mid] == k) return mid;
	if (v[mid] > k) return bin_search(v,l,mid-1,k);
	return bin_search(v,mid+1,r,k);
}

int main(){
	/* Input:
	n: So luong phan tu trong mang
	v: Mang chua cac phan tu
	k: Phan tu can tim kiem
	Output: Chi ra vi tri cua phan tu can tim kiem, hoac neu khong tim thay thi output -1
	*/
	 
	int n, k, x; vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);
	}
	cin >> k;
	cout << bin_search(v, 0, n-1, k);
}
