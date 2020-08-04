/*

name: Ethan Herndon
date: 8/4/2020

https://www.hackerrank.com/challenges/pangrams/problem

*/
#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

  int total = 0; //abcdefghijklmnopqrstuvwxyz
  //We promptly judged antique ivory buckles for the next prize
  int a = 0;
  int b = 0;
  int cl = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  int m = 0;
  int n = 0;
  int o = 0;
  int p = 0;
  int q = 0;
  int r = 0;
  int sl = 0;
  int t = 0;
  int u = 0;
  int v = 0;
  int w = 0;
  int x = 0;
  int y = 0;
  int z = 0;
  char letters[26] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z'
  };
  for (const char c: s) {
    if (toupper(c) == letters[0]) {
      a = 1;
    }
    if (toupper(c) == letters[1]) {
      b = 1;
    }
    if (toupper(c) == letters[2]) {
      cl = 1;
    }
    if (toupper(c) == letters[3]) {
      d = 1;
    }
    if (toupper(c) == letters[4]) {
      e = 1;
    }
    if (toupper(c) == letters[5]) {
      f = 1;
    }
    if (toupper(c) == letters[6]) {
      g = 1;
    }
    if (toupper(c) == letters[7]) {
      h = 1;
    }
    if (toupper(c) == letters[8]) {
      i = 1;
    }
    if (toupper(c) == letters[9]) {
      j = 1;
    }
    if (toupper(c) == letters[10]) {
      k = 1;
    }
    if (toupper(c) == letters[11]) {
      l = 1;
    }
    if (toupper(c) == letters[12]) {
      m = 1;
    }
    if (toupper(c) == letters[13]) {
      n = 1;
    }
    if (toupper(c) == letters[14]) {
      o = 1;
    }
    if (toupper(c) == letters[15]) {
      p = 1;
    }
    if (toupper(c) == letters[16]) {
      q = 1;
    }
    if (toupper(c) == letters[17]) {
      r = 1;
    }
    if (toupper(c) == letters[18]) {
      sl = 1;
    }
    if (toupper(c) == letters[19]) {
      t = 1;
    }
    if (toupper(c) == letters[20]) {
      u = 1;
    }
    if (toupper(c) == letters[21]) {
      v = 1;
    }
    if (toupper(c) == letters[22]) {
      w = 1;
    }
    if (toupper(c) == letters[23]) {
      x = 1;
    }
    if (toupper(c) == letters[24]) {
      y = 1;
    }
    if (toupper(c) == letters[25]) {
      z = 1;
    }
  }
  total = a + b + cl + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + sl + t + u + v + w + x + y + z;
  if (total == 26) {
    return "pangram";
  } else
    return "not pangram";

  /*Slicker function
    bitset<26> letters;
for (const char c : s)
   letters[toupper(c) - 'A'] = true;
return letters.all() ? "pangram" : "not pangram";
    */

}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = pangrams(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
