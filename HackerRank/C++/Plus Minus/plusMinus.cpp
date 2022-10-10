/*
name: Ethan Herndon
date: 12/23/2020
https://www.hackerrank.com/challenges/plus-minus/problem
*/

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

vector < string > split_string(string);

/*
Key Constraints
proportion of positive values
proportion of negative values
proportion of zeros

Sample Run
6
-4 3 -9 0 4 1

*/

// Complete the plusMinus function below.
void plusMinus(vector < int > arr) {

  float propPosVals = 0.0;
  float propNegVals = 0.0;
  float propZeroVals = 0.0;
  float pos = 0.0;
  float neg = 0.0;
  float zero = 0.0;
  vector < int > result;

  for (int i = 0; i < arr.size(); i++) {

    if (arr[i] > 0) {
      propPosVals++;
    }
    if (arr[i] < 0) {
      propNegVals++;
    }
    if (arr[i] == 0) {
      propZeroVals++;
    }

  }

  cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
  //https://www.cplusplus.com/reference/ios/fixed/
  pos = propPosVals / arr.size();
  neg = propNegVals / arr.size();
  zero = propZeroVals / arr.size();

  cout << pos << endl << neg << endl << zero;

}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits < streamsize > ::max(), '\n');

  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector < string > arr_temp = split_string(arr_temp_temp);

  vector < int > arr(n);

  for (int i = 0; i < n; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
  }

  plusMinus(arr);

  return 0;
}

vector < string > split_string(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char & x,
    const char & y) {
    return x == y and x == ' ';
  });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector < string > splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}
