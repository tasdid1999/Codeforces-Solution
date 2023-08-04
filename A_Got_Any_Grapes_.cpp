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

     int a , d , m , gg , bg , pg;

     cin >> a >> d >> m;
     cin >> gg >> pg >> bg;

     if(gg >= a)
     {
         gg-=a;

         int take = gg + pg;

         if(take >= d)
         {
             take-=d;
             take+=bg;

             if(take >= m)cout << "YES" << endl;
             else cout << "NO" << endl;
         }
         else cout << "NO" << endl;
     }
     else cout << "NO" << endl;
    
}
