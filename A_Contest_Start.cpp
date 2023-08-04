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
         long long n , in , d;
         cin >> n >> in >> d ;

         if(d < in)
         {
             cout << 0 << endl;
         }
         else if(d == in)
         {
             cout << n - 1 << endl;
         }
         else{

             long long range = (d / in);

             if(n > range)
             {
                 long long x = n - range;
                 x = (x * range);
                 long long x2 = range - 1;
                 
                 x2 = (x2 * (x2+1))/2;

                 cout << x + x2 << endl;

             }
             else{

                 long long ans = n - 1;

                 cout << (ans * (ans+1)) / 2 << endl;
             }
         }
     }
    
}
