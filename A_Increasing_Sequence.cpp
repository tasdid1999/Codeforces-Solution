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

     int n,k;
     cin >> n >> k;
     
     int a[n] , cnt = 0;
     for(int i = 0; i < n; i++)cin >> a[i];

     for(int i = 0 ; i < n - 1; i++)
     {
         if(a[i] >= a[i+1] )
         {
              int diff = abs(a[i] - a[i+1]),take;
              diff +=1;

              if(diff % k == 0)
              {  
                  take = diff / k;  
                  a[i+1] = a[i+1] + (take * k);
                  cnt+= take;
              }
              else{
                  
                  take = ((diff / k ) + 1);
                  a[i+1] = a[i+1] + (take * k) ;
                  cnt+= take;
              }
         }
     }


     cout << cnt << endl;
    
}
