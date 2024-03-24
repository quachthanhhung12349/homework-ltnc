#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if (s[s.size()-2] == 'A'){
        if (s[0] == '1' and s[1] == '2'){
            s[0] = '0'; s[1] = '0';
        }
        return s.substr(0,8);
    }
    else{
        if (s[0] != '1' or s[1] != '2'){
            if (s[1]+2 > '9'){
                s[1] -= 8; s[0] += 2;
            }
            else{
                s[1] += 2; s[0] += 1;
            }
        }
        return s.substr(0,8);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

