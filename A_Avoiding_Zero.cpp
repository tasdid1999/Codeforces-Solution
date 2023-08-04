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

         int ps = 0, sum = 0, ns = 0;

         for(int i = 0; i < n; i++)
         {
             cin >> a[i];

             sum+=a[i];

             if(a[i] > 0)ps+=a[i];
             else if(a[i] < 0)ns+=a[i];
         }

         if(sum == 0)
         {
             cout << "NO" << endl;
         }else{
             
             cout << "YES" << endl;
             sort(a,a+n);

             if(ps > abs(ns))
             {
                 for(int i = n-1; i >= 0; i--)cout << a[i] << " ";

                 cout << endl;
             }else{

                 for(int i = 0; i < n; i++)cout << a[i] << " ";

                 cout << endl;
             }
         }
     }
    
}
