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
         cin >> n;
         string s;
         cin >> s;

         long long cnt = 0,take = 0;

         for(int i = 0 ; i < s.size(); i++)
         {
             cnt+=(s[i]-48);
            
         }

         for(int i = 0 ; i < s.size()-1; i++)
         {
             if(s[i]-48 > 0)take++;
         }

         cnt+=take;
        

         

         cout << cnt << endl;

         
     }
    
}
