#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, t, a; string s;
    map <string, int> map1;
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> t;
        if (t == 1){
            cin >> s >> a;
            map1[s] += a;
        }
        if (t == 2){
            cin >> s;
            map1.erase(s);
        }
        if (t == 3){
            cin >> s;
            cout << map1[s] << '\n';
        }
    }
    return 0;
}

