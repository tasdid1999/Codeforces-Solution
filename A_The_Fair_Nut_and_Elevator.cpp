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

     int n;
     cin >> n;
     int a[n];

     for(int i = 0 ; i < n; i++)cin >> a[i];

     int ans = INT_MAX;

     for(int i = 0 ; i < n; i++)
     {
         int curr  = i;
         int totalCost = 0;
         
         for(int j = 0; j < n; j++)
         {
           int percost = 0;

            percost+=abs(j-0) * 2;
            percost+=abs(curr-j)*2;
            percost+=abs(curr-0)*2;

            totalCost+=(percost * a[j]);
         }

         ans = min(ans,totalCost);
     }
    
    cout << ans << endl;
}
