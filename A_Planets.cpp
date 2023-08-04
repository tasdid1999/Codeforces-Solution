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
         long long n , c;
         cin >> n >> c;
         map<long long ,long long>mp;

         for(int i = 0 ; i < n; i++)
         {
             int x;
             cin >> x;
             mp[x]++;
         }

         int cnt = 0;

         for(auto u : mp)
         {
             if(u.second < c)cnt+=u.second;
             else cnt+=c; 
         }

         cout << cnt << endl;
     }
}