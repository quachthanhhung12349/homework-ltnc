#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a[10001], b[10002], t;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> t;
        a[t]++;
    }
    for (int i = 1; i <= n+1; i++){
        cin >> t;
        b[t]++;
    }
    for (int i = 0; i <= 10000; i++){
        if (a[i] != b[i]){
            cout << i;
            return 0;
        }
    }
    return 0;
}

