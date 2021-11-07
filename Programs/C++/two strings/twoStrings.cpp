/*
name: Ethan Herndon
date: 6/10/2021
https://www.hackerrank.com/challenges/two-strings/problem
*/

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string & );
string rtrim(const string & );

/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

string twoStrings(string s1, string s2) {

  string firstString, secondString;
  int stringSize, counter = 0;
  firstString = s1;
  secondString = s2;

  if (firstString.size() <= secondString.size()) {
    stringSize = firstString.size();
  } else {
    stringSize = secondString.size();
  }

  for (int i = 0; i < stringSize; i++) {
    /*
    if(count(secondString.begin(), secondString.end(), firstString[i]) == true){
        counter++;
    }
    else if(count(firstString.begin(), firstString.end(), secondString[i]) == true){
        counter++;
    } 
    //This commented section doesn't scale well https://support.hackerrank.com/hc/en-us/articles/360014096954--Terminated-due-to-timeout-status-#1
    //count(): Returns 1 or 0 if the element is in the set or not respectively. Its time complexity is O(logN) where N is the size of the set.
    //find(): Searches the string and returns the FIRST occurrence of the parameter in the string. Its time complexity is O(N) where N is the size of the string.
    */
    size_t found = firstString.find(secondString[i]);
    if (found != string::npos) {
      counter++;
    }
  }
  if (counter >= 1) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string q_temp;
  getline(cin, q_temp);

  int q = stoi(ltrim(rtrim(q_temp)));

  for (int q_itr = 0; q_itr < q; q_itr++) {
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    string result = twoStrings(s1, s2);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

string ltrim(const string & str) {
  string s(str);

  s.erase(
    s.begin(),
    find_if(s.begin(), s.end(), not1(ptr_fun < int, int > (isspace)))
  );

  return s;
}

string rtrim(const string & str) {
  string s(str);

  s.erase(
    find_if(s.rbegin(), s.rend(), not1(ptr_fun < int, int > (isspace))).base(),
    s.end()
  );

  return s;
}