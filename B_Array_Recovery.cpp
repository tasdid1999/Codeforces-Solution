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

         vector<int>v;
         bool flag = false;

         for(int i = 0 ; i < n; i++)
         {
             if(i == 0)v.push_back(a[i]);
             else
             {
                 if(a[i] == 0)v.push_back(v[i-1]);
                 else
                 {
                     if((v[i-1]+a[i] >= 0) && (v[i-1]-a[i] >= 0) )
                     {
                        flag = true;
                        break;
                     }
                     else
                     {
                        v.push_back(v[i-1] + a[i]);
                     }
                 }
             }
         }

         if(flag)
         {
              cout << -1 << endl;
              continue;
         }

         for(auto u : v)cout << u << " ";

         cout << endl;
     }

}