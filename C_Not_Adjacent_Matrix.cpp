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
         if( n == 1)cout << 1 << endl;
         else if(n == 2)cout << -1 << endl;
         else{
             
             int cnt = 1,cnt2 = 2;
             for(int i = 1; i <= n; i++)
             {
                 for(int j = 1; j <= n; j++)
                 {
                     if(cnt <= n*n)
                     {
                         cout << cnt <<" ";
                         cnt+=2;
                     }
                     else if(cnt > n*n && cnt2 <= n*n)
                     {
                         cout << cnt2 << " ";
                         cnt2+=2;
                     }
                 }

                 cout << endl;
             }
         }

     }
    
}
