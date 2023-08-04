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

        int a[n];

        for(int i = 0 ; i < n; i++)cin >> a[i];

        int l[n];
        l[0] = a[0];

        for(int i = 1; i < n; i++)l[i] = l[i-1] + a[i];
        //for(int i = 0 ; i < n; i++)cout << l[i] << ' ';
        reverse(a, a + n);

        int r[n];
         r[0] = a[0];
         map<int ,int>mp;
         mp[r[0]] = n-1;
        for(int i = 1; i < n; i++)
        {
            r[i] = r[i-1] + a[i];
            mp[r[i]] = n - i -1;
        }
        
        int ans = 0;

        for(int i = 0 ; i < n; i++)
        {
             
              if(mp[l[i]] != 0)
              {
                  
                  if(mp[l[i]] > i)
                  {
                    
                     ans = i + 1 + (n - mp[l[i]]);
                  }
              }
        }
       


       cout << ans << endl;

     }

     }

