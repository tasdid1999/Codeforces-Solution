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
    
          string s;
          cin >> s;
          vector<pair<char ,int>>vp;
          
         for(int i = 1; i < s.size()-1; i++)
         {
            
            if(s[0] > s[s.size()-1])
            {
                  if(s[i] <= s[0] && s[i] >= s[s.size()-1])
                  {
                      vp.push_back({s[i],i+1});
                  }
                
            }
            else
            {
                if(s[i] >= s[0] && s[i] <= s[s.size()-1])
                  {
                      vp.push_back({s[i],i+1});
                  }
            }
         }

         if(s[0] > s[s.size()-1])sort(vp.rbegin(),vp.rend());
         else sort(vp.begin(),vp.end());
         
         if(vp.size() == 0)
         {
              cout << abs((s[0]-97+1) - (s[s.size()-1]-97+1)) << " " << 2 << endl;
              cout << 1 << " "<< s.size() << endl;

              continue;
         }
         vector<int>ans;
         
         int cst = 0;
                 
         cst+=abs((s[0]-97 + 1) - (vp[0].first - 97 + 1));
        

         ans.push_back(1);

         for(int i = 0 ; i < vp.size()-1; i++)
         {
              cst+=abs((vp[i].first-97 + 1) - (vp[i+1].first-97 + 1));
              ans.push_back(vp[i].second);
         }

         cst+=abs((vp[vp.size()-1].first-97 + 1) - (s[s.size()-1]-97 + 1));
         ans.push_back(vp[vp.size()-1].second);
         ans.push_back(s.size());

         cout << cst << " "<< ans.size()<<endl;

         for(auto u : ans)cout << u << " ";

         cout << endl;

         

     }
     
}