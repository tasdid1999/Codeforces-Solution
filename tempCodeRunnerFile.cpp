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

     for(int i = 0; i < n; i++)cin >> a[i];
      
      int cnt = 0 , mx = INT_MIN;
     for(int i = 0 ; i  < n; i++)
     {
         if(a[i] == 0)
         {
             if(cnt > mx)mx = cnt;
             cnt = 0;
         }
         else cnt++;
       
         
     }
     
     int fc = 0;
     for(int i = 0; i < n; i++)
     {
        if(a[i] == 0)break;
        else fc++;
     }
      int bc = 0;
     for(int i = n-1; i >= 0; i--)
     {
        if(a[i] == 0)break;
        else bc++;
     }
    
    int sum;
    if(fc == 0 || bc == 0)sum = 0;
    else sum = fc + bc;

    cout << max(mx,sum) << endl;
    
}
