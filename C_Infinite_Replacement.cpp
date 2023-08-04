#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007
long long fact(int n)
{
   long long f = 1;
   for(int i = 1; i <= n; i++)f*=2;

   return f; 
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

     int tc;
     cin >> tc;

     while(tc--)
     {
         string s1 , s2;
         cin >> s1 >> s2;

         if(s2.size() == 1)
         {
             if(s2[0] == 'a')
             {
                 cout << 1 << endl;
             }
             else
             {
                 cout << fact(s1.size())<< endl;
             }
         }
         else
         {
             bool flag = false;
             for(int i = 0 ; i < s2.size(); i++)
             {
                 if(s2[i] == 'a')
                 {
                     cout << -1 << endl;
                     flag = true;
                     break;
                 }
             }

             if(flag)continue;

             cout << fact(s1.size())<< endl;
            
         }
     }
}