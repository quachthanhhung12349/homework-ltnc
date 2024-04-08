#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <vector <int> > a;
    cin >> n >> q;
    for (int i = 1; i <= n; i++){
        vector <int> v; int m, x;
        cin >> m;
        for (int i = 0; i < m; i++){
            cin >> x;
            v.push_back(x);
        }
        a.push_back(v);
    }
    for (int i = 1; i <= q; i++){
        int j, k;
        cin >> j >> k;
        cout << a[j][k] << endl;
    }
    return 0;
}
