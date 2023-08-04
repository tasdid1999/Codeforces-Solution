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

     if(n<=2)
     {
         cout << 0 << endl;

         return 0;
     }

     long long a[n];

     for(int i = 0 ; i< n; i++)cin >> a[i];

     sort(a,a+n);

      int mn = a[0] , mx = a[n-1];

      
     
}
