/*
name: Ethan Herndon
date: 5/29/2021
https://www.hackerrank.com/challenges/time-conversion/problem
*/
#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

/*
 * Complete the timeConversion function below.
 */

string timeConversion(string s) {

  string inputString = s;
  string result = "";
  if (inputString.find("AM") != string::npos) {
    string desiredString = s;
    inputString.erase(inputString.size() - 2);
    string stringToBeConverted = inputString;
    desiredString = stringToBeConverted;
    desiredString.erase(0, 2);
    vector < char > myVector(stringToBeConverted.begin(), stringToBeConverted.end());
    vector < char > firstTwoIndexes;

    for (int i = 0; i < myVector.size(); i++) {
      firstTwoIndexes.push_back(myVector[0]);
      firstTwoIndexes.push_back(myVector[1]);
    }

    stringstream ss;
    ss << firstTwoIndexes[0] << firstTwoIndexes[1];
    string str = ss.str();
    stringstream geek(str);
    int x = 0;
    geek >> x;
    if (x == 10) {
      result = to_string(x) + desiredString;
    } else if (x == 11) {
      result = to_string(x) + desiredString;
    } else if (x <= 9) {
      result = to_string(0) + to_string(x) + desiredString;
    } else {
      int hour = 12;
      hour = hour - x;
      result = to_string(0) + to_string(hour) + desiredString;
    }
  }

  if (inputString.find("PM") != string::npos) {
    string desiredString = s;
    inputString.erase(inputString.size() - 2);
    string stringToBeConverted = inputString;
    desiredString = stringToBeConverted;
    desiredString.erase(0, 2);
    vector < char > myVector(stringToBeConverted.begin(), stringToBeConverted.end());
    vector < char > firstTwoIndexes;

    for (int i = 0; i < myVector.size(); i++) {
      firstTwoIndexes.push_back(myVector[0]);
      firstTwoIndexes.push_back(myVector[1]);
    }

    stringstream ss;
    ss << firstTwoIndexes[0] << firstTwoIndexes[1];
    string str = ss.str();
    stringstream geek(str);
    int x = 0;
    geek >> x;

    if (x == 12) {
      result = to_string(x) + desiredString;
    } else {
      int hour = 12;
      hour = hour + x;
      result = to_string(hour) + desiredString;
    }

  }
  return result;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
