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
         int n , h;
         cin >> n >> h;

         int a[n];
         for(int i = 0 ; i < n; i++)cin >> a[i];

         sort(a,a+n);
         int max = a[n-1];
         int min = a[n-2];
         if(h < max)cout << 1 << endl;
         else if((h % (max+min) )== 0)cout << (h / (max + min) )*2 << endl;
         else{

              int ans = h % (max + min);
              if(ans <= max)
              {
                  cout << ((h / (max + min)) * 2) + 1 << endl;
              }
              else
              {
                  cout << ((h / (max + min)) * 2) + 2 << endl;
              }
         }

      
     }
    
}
