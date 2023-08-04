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

          int nc = 0;
          for(int i = 0 ; i < n; i++)
          {
              cin >> a[i];
              if(a[i] < 0)nc++;
              a[i] = abs(a[i]);
          }

          if(nc % 2 == 0)
          {
              long long sm = 0;
              for(int i = 0 ; i < n; i++)sm+=a[i];

              cout << sm << endl;
          }
          else
          {
              sort(a,a+n);
              long long sm = -1 * a[0];

              for(int i = 1; i < n; i++)sm+=a[i];

              cout << sm << endl;
          }

         
     }
     
}