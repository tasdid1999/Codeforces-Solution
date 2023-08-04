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

        
         int a[n];
         map<int , int>mp;
         set<int>st;
         for(int i = 0 ; i < n; i++)
         {
             cin >> a[i];
             
             mp[a[i]]++;
         }
         
         int mx = 0 , take;
         for(auto u : mp)
         {
             if(u.second > mx)
             {
                 mx = u.second;
                 take = u.first;

             }
         }
        
         for(int i = 0 ; i < n; i++)
         {
             if(a[i] != take)st.insert(a[i]);
         }
         if(n == 1)cout << 0 << endl;
         else if(n == 2)cout << 1 << endl;
         else if(mx == n)cout << 1 << endl;
         else if(st.size() == mx)
         {
             cout << mx << endl;
             
         }
         else if(mx > st.size())
         {
             int diff = mx - st.size();
             if(diff > 1)
             {
                 cout << (diff / 2 ) + st.size() << endl;
             }
             else cout << st.size() << endl;
         }
         else if(st.size() > mx) cout << mx << endl;
        
     }

    
     
    
}
