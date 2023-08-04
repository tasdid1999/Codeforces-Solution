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

           long long n;
           cin >> n;
           long long a[n];
           map<long long , long long>mp;
           for(int i = 0 ; i < n; i++)
           {
            cin >> a[i];
            mp[a[i]]++;
           }
           if(mp.size() == 1)
           {
              cout << n*(n-1)<<endl;
              continue;
           }

           long long mx = INT_MIN;
           for(int i = 0 ; i < n; i++)mx = max(mx,a[i]);

           long long mn = INT_MAX;
           for(int i = 0 ;  i< n; i++)mn = min(mn,a[i]);
           
           long long men = 0, mex = 0;
           for(auto u : mp)
           {
                  if(u.first == mx)mex = u.second;
                  if(u.first == mn)men = u.second;
           }
           
           cout <<(men * mex)*2  <<endl;

     }

}