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

     long long n , h, m;

     cin >> n >> h >> m;

     long long a[n + 1];

     for(int i = 1; i <= n; i++)a[i] = h;

     while( m-- )
     {
         long long l , r , x;
         cin >> l >> r >> x;

         for(int j = l; j <= r; j++ ) a[j] = min(a[j],x);

        
                
     }

     long long ans = 0;

     for(int i = 1; i <= n; i++)ans+=(a[i] * a[i]);

     cout << ans << endl;
    
}
