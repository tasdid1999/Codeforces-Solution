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

     int n;
     cin >> n;
     map<int,int>mp;
     while( n-- )
     {
         
         string s;
         cin >> s;
         for(int i = 0; i < s.size(); i++)
         {
              if(s[i] == '1') mp[i]++;
         }
         
     }


      int mx = -1;
     for(auto u : mp)
     {
         if(u.second > mx)mx = u.second;
     }

     if(mx == -1)cout << 0 << endl;
     else cout << mx << endl;
}
