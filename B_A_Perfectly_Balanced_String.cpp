#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);string s;

     int tc;
     cin >> tc;
     while(tc--)
     {
        string s;
        cin >> s;
        map<char ,int>mp;

        for(int i = 0 ; i < s.size() ;i++)
        {
            mp[s[i]]++;
        }
        if(mp.size() == 1)cout << "YES"<<endl;
        else
        {
               bool flag = false;
               for(int i = 0 ; i < s.size()-1 ;i++)
               {
                   if(s[i] == s[i+1])
                   {
                       cout << "NO"<<endl;
                       flag = true;
                       break;
                   }

               }

               if(flag)continue;

               int mx = INT_MIN;
               int mn = INT_MAX;

               for(auto u : mp)
               {
                   mx = max(mx , u.second);
                   mn = min(mn , u.second);
               }

               if(mx - mn > 1)cout << "NO"<<endl;
               else cout << "YES"<<endl;
        }
     }
}