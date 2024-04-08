#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v; int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> t;
        v.push_back(t);
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> t;
        vector <int>::iterator it = lower_bound(v.begin(),v.end(),t);
        if (*it == t) cout << "Yes ";
        else cout << "No ";
        cout << it-v.begin()+1 << '\n';
    }

  
    return 0;
}

