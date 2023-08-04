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

     int n;
     cin >> n;

     int a[n+1];

     for(int i = 1; i <=n ; i++)cin >> a[i];
     
     int mx = INT_MIN , mn = INT_MAX,mxpos, mnpos;

     for(int i = 1; i <= n; i++)
     {
         if(a[i] > mx)
         {
             mx = a[i];
             mxpos = i;
         }
         if(a[i] < mn )
         {
          mn = a[i];
          mnpos = i ;
         }
     }

        int ans1 = abs(mxpos - mnpos);
        int ans2 = abs(mxpos - 1);
        int ans3 = abs(mxpos - n);
        int ans4 = abs(mnpos - 1 );
        int ans5 = abs(mnpos - n);

        int an1 = max(ans1,ans2);
        int an2 = max(ans3,ans4);

         cout << max(an1 , max(an2,ans5)) << endl;

    
}
