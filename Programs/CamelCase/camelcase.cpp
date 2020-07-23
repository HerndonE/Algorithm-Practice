/*
name: Ethan Herndon
date: 7/22/2020

https://www.hackerrank.com/challenges/camelcase/problem

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

  int total = 0;
  char cstr[s.size() + 1];
  strcpy(cstr, s.c_str());
  //cout << strlen(cstr) << '\n';

  for (int i = 0; cstr[i] != 0; i++) {
    //cout << cstr[i] <<endl;
    if (cstr[i] >= 'A' && cstr[i] <= 'Z') {
      total = total + 1;
    }
  }
  total = total + 1;
  return total;

  /* //Fancier and condensed code
  int total = 1;
  for (const char c : s) {
      if (isupper(c))
          ++total;
  }
  return total;

  */

}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  int result = camelcase(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
