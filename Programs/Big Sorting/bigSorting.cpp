/*

name: Ethan Herndon
date: 8/22/2020

https://www.hackerrank.com/challenges/big-sorting/problem

*/


#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {

vector<string> sorted = unsorted;
sort(sorted.begin(), sorted.end(),
    [](const string & a, const string & b) {
        if (a.length() == b.length())
            return a < b;
        else
            return a.length() < b.length();
    });
return sorted;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

