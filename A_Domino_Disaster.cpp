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

         for(int i = 0 ; i < s.size(); i++)
         {
             if(s[i] == 'U')cout << 'D';
             else if(s[i] == 'D')cout << 'U';
             else cout << s[i];
         }

         cout << endl;
     }
    
}
