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

     long long n , m;
     cin >> n >> m;

     int a[n];

     for(int i = 0 ; i < n; i++)cin >> a[i];

     long long l[n] , r[n];
     for(int i = 0 ; i < n; i++)
     {
        l[i] = 0;
        r[i] = 0;
     }


     l[0] = 0;
     r[n-1] = 0;

     for(int i = 1; i < n; i++)
     {
        if(a[i-1]>a[i])l[i] = l[i-1] + (a[i-1]-a[i]);
        else l[i] = l[i-1];
     }

     for(int i = n -2; i >= 0; i-- )
     {
        if(a[i] < a[i+1])r[i] = r[i+1] + (a[i+1] - a[i]);
        else r[i] = r[i+1];
     }
     

     while(m--)
     {
        int x , y;
        cin >> x >> y;

        if(x > y)
        {
            cout << r[y-1] - r[x-1] << endl;
        }
        else cout << l[y-1] - l[x-1] << endl;

       
        
     }
}