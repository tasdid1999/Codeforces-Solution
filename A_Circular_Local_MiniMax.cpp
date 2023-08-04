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
        int n;
        cin >> n;

        
        vector<int>v;
        for(int i = 0 ; i < n; i++)
        {
           int x;
           cin >> x;
           v.push_back(x);
        }

        
        sort(v.begin(),v.end());

        vector<int>ans;

        if(v.size() % 2)
        {
           cout << "NO"<<endl;
           continue;
        }

        int l = 0 , r = v.size()/2;
        int cnt = 1;
        bool f = true;
        while(true)
        {
           if(ans.size() == v.size())break;

           if(cnt % 2)
           {
              
               if(ans.size() == 0)
               {
                    ans.push_back(v[l]);
               }
               else
               {
                   if(ans[ans.size()-1] == v[l])
                   {
                       
                      
                       cout << "NO"<<endl;
                       f = false;
                       break;
                   }
                   else ans.push_back(v[l]);
               }

               l++;
               cnt++;
           }
           else
           {
             
              if(ans[ans.size()-1] == v[r])
              {
                
                 cout << "NO"<<endl;
                 f = false;
                 break;
              }
              else ans.push_back(v[r]);

              cnt++;
              r++;
           }


        }
        
        if(f)
        {
          
            if(ans[ans.size()-1] <= ans[0])
            {
                 cout << "NO"<<endl;
            }
            else
            {
                cout << "YES"<<endl;

                for(auto u : ans)cout << u << " ";

                cout << endl;
            }
        }
      
     }

}