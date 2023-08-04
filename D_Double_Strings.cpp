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

             vector<string>v;
             int n;
             cin >> n;
             map<string,int>mp;
             for(int i = 0 ; i < n; i++)
             {
                  string s;
                  cin >> s;
                  v.push_back(s);
                  mp[s] = 1;
             }
              vector<int>ans;
             for(int i = 0 ; i < n; i++)
             {
                  
                  bool flag = true;

                  string p = v[i];
                  string x = p;
                  string lo = "";
                  for(auto u : p)
                  {
                     lo+=u;
                      x.erase(0,1);
                    
                      if(mp[x] == 1 && mp[lo])
                      {
                          ans.push_back(1);
                          flag = false;
                          break;
                      }
                  }

                  if(flag)ans.push_back(0);

             }

            for(auto u : ans)cout <<u;

         cout << endl;
     }

}