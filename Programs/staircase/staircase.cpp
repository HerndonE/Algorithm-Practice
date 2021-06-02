/*
name: Ethan Herndon
date: 6/1/2021
https://www.hackerrank.com/challenges/staircase/problem
Reference: https://code4javac.com/2020/05/03/c-program-to-print-mirrored-right-triangle-star-pattern/
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */
void staircase(int n) {

    for(int i = 1; i <= n; i++){ //i is set to one for HackerRank output to prevent printing an empty line
        for(int j = 0; j < n - i; j++) //First iteration is n - 1 spaces ie if n = 5 "    "
        {
            cout << " ";
        }
        for(int j = 0; j < i; j++) //First iteration is j number of # plus n - 1 spaces ie "    " + #
        {
            cout << "#";
        }
        cout << '\n';
    }

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
