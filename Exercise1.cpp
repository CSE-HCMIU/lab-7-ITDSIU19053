#include<bits/stdc++.h>
using namespace std;
string matchedPrefixtill(string s1, string s2) {
   string res;
   int n1 = s1.length(); 
   int n2 = s2.length(); 
   for (int i = 0, j = 0; i <= n1 - 1 && j <= n2 - 1; i++, j++) {    
      if (s1[i] != s2[j])
         break;
      res.push_back(s1[i]);
   }
   return (res);
}
string matchedPrefix (string a[], int n) {
   string pre = a[0];
   for (int i = 1; i <= n - 1; i++)
   pre = matchedPrefixtill(pre, a[i]);
   return (pre);
}
int main() {
   string a[] = {"abc","abcd","abe","abdr"}; 
   int n = sizeof(a) / sizeof(a[0]);
   string res = matchedPrefix(a, n);
   if (res.length())
      cout<< res.c_str();
   return (0);
}
