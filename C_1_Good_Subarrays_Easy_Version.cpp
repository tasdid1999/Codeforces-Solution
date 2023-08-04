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
           long long n;
           cin >> n;

           long long a[n];

           for(int i = 0 ; i < n; i++)cin >> a[i];
           
           int ans = 0 ; 
           for(int i = 0 ; i< n; i++)
           {
               bool flag = true;
               for(int j = i; j < n; j++)
               {
                    if((a[j] + i) < j + 1)
                    {
                       
                       ans+=(j-i);
                       flag = false;
                       break;
                    }
               }
               if(flag)
               {
                  int take = (n-i);
                  long long res = (take * (take+1)) / 2;
                  ans+=res;
                  break;
               }
           }

           cout<<ans <<endl;

     }
}