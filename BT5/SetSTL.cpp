#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> s;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, y, x;
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> y >> x;
        if (y == 1){
            s.insert(x);
        }
        if (y == 2){
            if (s.find(x) != s.end()) s.erase(x);
        }
        if (y == 3){
            if (s.find(x) != s.end()) cout << "Yes \n";
            else cout << "No \n"; 
        }
    }
    return 0;
}

