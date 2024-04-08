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
    int x, a, b;
    cin >> x >> a >> b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout << v.size() << '\n';
    for (auto it : v){
        cout << it << " ";
    }  
    return 0;
}

