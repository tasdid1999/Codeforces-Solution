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
         long long n , k;
         cin >> n >> k;

         if( n == 1)cout << k << endl;
         else if( n == k)cout << 1 << endl;
         else if(k > n)
         {
             if( k % n == 0 )cout << k / n << endl;
             else cout << (k / n) + 1 << endl;
         }
         else if( k < n)
         {
              if( n % k == 0)cout << 1 << endl;
              else cout << 2 << endl;
         }
     }
    
}
