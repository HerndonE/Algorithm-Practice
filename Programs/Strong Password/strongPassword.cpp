/*

Name: Ethan Herndon
Date: 7/25/2020

https://www.hackerrank.com/challenges/strong-password/problem

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
  // Return the minimum number of characters to make the password strong

  string numbers = "0123456789";
  string lower_case = "abcdefghijklmnopqrstuvwxyz";
  string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string special_characters = "!@#$%^&*()-+";
  int total, numCheck, lowCaseCheck, upperCaseCheck, specialCharCheck = 0;

  if (n <= 100) {
    if (std::string::npos != password.find_first_of(numbers)) {
      numCheck = 0;
      //cout << "numbers found" << endl;
    } else {
      numCheck = 1;
      //cout << "numbers not found" << endl;
    }
    if (std::string::npos != password.find_first_of(lower_case)) {
      lowCaseCheck = 0;
      //cout << "lower case found" << endl;
    } else {
      lowCaseCheck = 1;
      //cout << "lower case not found" << endl;
    }
    if (std::string::npos != password.find_first_of(upper_case)) {
      upperCaseCheck = 0;
      //cout << "upper case found" << endl;
    } else {
      upperCaseCheck = 1;
      //cout << "upper case not found" << endl;
    }
    if (std::string::npos != password.find_first_of(special_characters)) {
      specialCharCheck = 0;
      //cout << "special char found" << endl;
    } else {
      specialCharCheck = 1;
      //cout << "special char not found" << endl;
    }
    total = numCheck + lowCaseCheck + upperCaseCheck + specialCharCheck;
    //cout << total;
    //return (total>(6-n))?total:(6-n); //A ? B : C returns B if A is true and C if A is false
    //So if total is more than 6 - n it returns total else it returns 6 - n

    return max(total, 6-n); //Returns the largest of total and 6-n. If both are equivalent, total is returned.

  }
return 1;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits < streamsize > ::max(), '\n');

  string password;
  getline(cin, password);

  int answer = minimumNumber(n, password);

  fout << answer << "\n";

  fout.close();

  return 0;
}
