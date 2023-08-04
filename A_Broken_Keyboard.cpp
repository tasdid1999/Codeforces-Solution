#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

     int tc;
     cin >> tc;

     while(tc--)
     {
         string s;
         cin >> s;

          set<char>res;
         
         if(s.size()==1)
         {
             cout << s << endl;
             continue;
         }
         for(int i = 0; i < s.size(); i++)
         {
             if(s[i] == s[i+1])i++;
             else
             {
                 res.insert(s[i]);
             }
         }

         

         if(res.size() == 0)
         {
             cout << endl;
             continue;
         }
         
         for(auto u : res)cout << u ;

         cout << endl;
        
     }
    
}
