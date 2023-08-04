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

     long long tc;
     cin >> tc;
     while(tc--)
     {
           long long n;
           char c;
           cin >> n >> c;

           string s;
           cin >> s;

          
           
           bool cb = false , gb = false;
           int ans = 0;
           int takec;

           for(int i = 0 ; i < s.size(); i++)
           {
               if(s[i] == c && cb == false)
               {
                  takec = i;
                  cb = true;
               }
               if(s[i] == 'g'  && cb == true)
               {
                  int res = abs(takec - i);
                  ans = max(ans , res);
                  cb = false;
               }
           }

           if(cb)
           {
                for(int i = 0 ; i < s.size(); i++)
                {
                      if(s[i] == 'g')
                      {
                          int res = ((n-1)-takec) + i + 1;
                          ans = max(ans , res);
                          break;
                      }
                }
           }

           cout << ans << endl;
     }
}