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
           if(n == 1)
           {
              cout << 1 << endl;
              cout << 1 << " " << 2 << endl;
              continue;
           }
           string test = "";
           for(int i = 0 ; i < n; i++)test+="BAN";

           vector<pair<int , int>>ans;
            int base = n;
            int one = 1;
           for(int i = test.size()-1; i >= 0; i--)
           {
               if(base == 1)break;
               if(test[i] == 'B')base--;
               else if(test[i] != 'B')
               {
                     base--;
                     ans.push_back({one,i+1});
                     one+=3;
               }
           }
           if(n ==4)
           {
               ans.push_back({7,9});
               cout << ans.size() << endl;
               for(auto u : ans)cout << u.first << " "<<u.second<<endl;
               
           }
           else
           {
                  cout << ans.size()<<endl;
           for(auto u : ans)cout << u.first << " "<<u.second<<endl;
           }
          


     }


}