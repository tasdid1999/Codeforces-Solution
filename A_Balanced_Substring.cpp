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
         
         int flag = 1;
         for(int i = 0; i < s.size(); i++)
         {
             if(s[i] == 'a' && s[i+1] == 'b')
             {
                 cout << i +1 << " " << i+2 << endl;
                 flag = 0;
                 break;
             }
             if(s[i] == 'b' && s[i+1] == 'a')
             {
                 cout << i +1 << " " << i+2 << endl;
                 flag = 0;
                 break;
             }
         }

         if(flag)cout << -1 << " " << -1 << endl;
     }
    
}
