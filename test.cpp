#include<bits/stdc++.h>
using namespace std;
int LCS(string s , string t , int i , int j)
{
       if(i == s.size() || j == t.size())return 0;
       
       if(s[i] == s[j])return 1 + LCS(s,t,i+1,j+1);

       return 0;

        
}
int main()
{
     
     string s = "abb" ,t = "bba";
     int n = s.size();
     int m = t.size();
    

    cout <<  LCS(s, t , 0 , 0) << endl;
}