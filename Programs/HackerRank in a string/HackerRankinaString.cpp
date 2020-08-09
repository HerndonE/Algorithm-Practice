#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

 int total = 0;
 size_t h = s.find("h");
 size_t a = s.find("a", h+1);
 size_t c = s.find("c", a+1);
 size_t k = s.find("k", c+1);
 size_t e = s.find("e", k+1);
 size_t r = s.find("r", e+1);
 size_t rAgain = s.find("r", r+1);
 size_t aAgain = s.find("a", rAgain+1);
 size_t n = s.find("n", aAgain+1);
 size_t kAgain = s.find("k", n+1);

 //char letters[10] = {'h','a','c','k','e','r','r','a','n','k'};

 int hCount = 0;
 int aCount = 0;
 int cCount = 0;
 int kCount = 0;
 int eCount = 0;
 int rCount = 0;
 int rAgainCount = 0;
 int aAgainCount = 0;
 int nCount = 0;
 int kAgainCount = 0;

  for (int i = 0; i < s.length(); i++) {


    if (h != string::npos)
        hCount = 1;
    if (a != string::npos)
         aCount = 1;
     if (c != string::npos)
         cCount = 1;
     if (k != string::npos)
         kCount = 1;
     if (e != string::npos)
         eCount = 1;
    if (r != string::npos)
         rCount = 1;
    if (rAgain != string::npos)
         rAgainCount = 1;
    if (aAgain != string::npos)
         aAgainCount = 1;
    if (n != string::npos)
         nCount = 1;
    if (kAgain != string::npos)
         kAgainCount = 1;


  }

  total = hCount + aCount + cCount + kCount + eCount + rCount + rAgainCount + aAgainCount + nCount + kAgainCount;
  //cout << total;
  if(total != 10 ){
    return "NO";
  }else
  return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
