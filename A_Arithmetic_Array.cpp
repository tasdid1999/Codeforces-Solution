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
         int a[n],sum = 0;
         for(int i = 0 ; i< n; i++)
         {
             cin >> a[i];
             sum+=a[i];

         }

         if((sum%n == 0) && ((sum / n) == 1)){

             cout << 0 << endl;
         } 
         else if(sum > 0)
         {
             if(sum < n)
             {
                 cout << 1 << endl;
             }
             else{

                 cout << sum - n << endl;
             }

         }
         else{

             cout << 1 << endl;
         }

     }
    
}
