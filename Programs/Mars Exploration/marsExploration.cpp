/*

name: Ethan Herndon
date: 7/27/2020

https://www.hackerrank.com/challenges/mars-exploration/problem

*/
#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {

  int total = 0;
  string message = "SOS";
  //RORTPTSOSSOS //5
  //SOSOOSOSOSOSOSSOSOSOSOSOSOS //12

  //Main Goal: "We print the number of changed letters" per substring

  for (int i = 0; i < s.length(); i++) {
    //cout << s.substr(i, 3) << endl;
    //if(s.substr(i, 3) != "SOS")
    if (s.at(i) != message.at(i % 3)) //The use of 'at' is to return a reference to the character at position pos in the string.
    //In this case we are checking to see how many changes the of letters in the substring compared to 'SOS'.
    {
      total++;
    }
  }
  cout << total;
  return total;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  int result = marsExploration(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
