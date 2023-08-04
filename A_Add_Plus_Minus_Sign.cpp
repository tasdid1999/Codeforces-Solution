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
         int n;
         cin >> n;
         string s;
         cin >> s;

         int cnt = s[0]-48;

         for(int i = 0 ; i < s.size()-1; i++)
         {
            if(cnt)
            {
               if(s[i+1] == '0')cout<<"+";
               else 
               {
                  cout<<'-';
                  cnt--;
               }
            }
            else
            {
                if(s[i+1] == '0')cout<<'+';
                else 
                {
                    cout<<'+';
                    cnt++;
                }
            }
           
         }

         cout << endl;
     }

}