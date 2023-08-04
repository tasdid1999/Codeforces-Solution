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

     long long n , k;
     cin >> n >> k;

     long fi , ti;

     int mx = INT_MIN,ans;

     while( n-- )
     {
         cin >> fi >> ti;

         if(ti > k)
         {
             ans = fi - (ti - k);

             if(ans > mx)mx = ans;
         }else{

             if(fi > mx)mx = fi;
         }
     }
     
     cout << mx << endl;
}
