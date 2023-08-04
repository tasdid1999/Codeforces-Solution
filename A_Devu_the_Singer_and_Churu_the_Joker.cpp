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

     int n , d;
     cin >> n >> d;
    
     int a[n],sum = 0,song  = 0;
     for(int i = 0; i < n; i++)
     {
         cin >> a[i];
         sum+=a[i];
         song+=a[i];

     }

     sum+=((n-1)*10);

     if(sum > d)
     {
         cout << -1 << endl;
     }
     else{

         int x;

         x = d - sum;
         x = x + (sum-song);

         cout << x / 5 << endl;
     }


    
}
