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

        vector<int>p;
        map<char ,int>mp;

        for(int i = 0 ; i < s.size(); i++)
        {
              if(mp[s[i]] != 1)
              {
                  mp[s[i]] = 1;
                  p.push_back(mp.size());
              }
              else p.push_back(mp.size());
        }
         vector<int>l;
        map<char ,int>pp;

        for(int i = s.size()-1 ; i >= 0; i--)
        {
              if(pp[s[i]] != 1)
              {
                  pp[s[i]] = 1;
                  l.push_back(pp.size());
              }
              else l.push_back(pp.size());
        }
        reverse(l.begin(),l.end());
        int mx = 0;
        for(int i = 0 ; i < p.size()-1; i++)
        {
             mx = max(mx , p[i] + l[i+1]);
        }
       // for(int i = 0 ; i < l.size(); i++)cout << l[i] << ' ';

       // cout << endl;
        cout << mx << endl;


     }

}