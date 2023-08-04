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
          string s;
          cin >> s;

          long long ans = ((s.size()-1)*9) + 1;

          long long take = s[0]-48;
          ans+=(take-1);
          

          cout << ans << endl;
     }

}