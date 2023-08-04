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

         int a[n];
      
         for(int i = 0; i < n; i++)cin >> a[i];

         reverse(a,a+n);

         int l = 1;
         int hobe = a[0];
         bool flg = false;
         int cnt = 0;
         for(int i = 0; i < n; i++)
         {
              if(i+1 <= l && hobe != a[i] && flg == false)
              {
                  cnt++;
                  flg = true;
              }
              if(i+1 == l)
              {
                  flg = false;
                  l*=2;
              }
         }

         cout << cnt << endl;
     }


}