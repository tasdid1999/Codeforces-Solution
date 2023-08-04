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

           for(int i = 0 ; i < n; i++)cin >>a[i];
           int mn = INT_MAX;

           for(int i = 0 ; i < n; i++)
           {
              for(int j = i + 1 ; j <  n; j++)
              {
                   for(int k = j + 1; k < n; k++)
                   {
                       int diff1 = abs(a[i]-a[j]) + abs(a[i] - a[k]);
                       int diff2 = abs(a[j]-a[i]) + abs(a[j] - a[k]);
                       int diff3 = abs(a[k]-a[i]) + abs(a[k] - a[j]);

                       int mini = min(diff1,min(diff2,diff3));

                       if(mini < mn)
                       {
                          mn = mini;
                       }

                   }
              }
           }

           cout << mn << endl;
     }

}