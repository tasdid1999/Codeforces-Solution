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

           int a[n] , b[n];

           for(int i = 0 ; i < n; i++)cin >> a[i];
           
           for(int i = 0 ; i < n; i++)cin >> b[i];
           
           int cnt1 = 0;

           for(int i = 0 ; i < n; i++)
           {
              if(a[i] != b[i])cnt1++;
           }
           sort(a,a+n);
           sort(b,b+n);
           
           int cnt2 = 1;
           for(int i = 0 ; i < n; i++)
           {
               if(a[i] != b[i])cnt2++;
           }


           cout<<min(cnt1,cnt2)<<endl;        

           
     }

}