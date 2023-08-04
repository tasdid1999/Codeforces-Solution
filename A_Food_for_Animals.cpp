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
         long long a , b , c , x , y;

         cin >> a >> b >> c >> x >> y;
         long long dn , cn;
         if(a >= x)dn = 0;
         else dn = x - a;

         if(b >= y)cn = 0;
         else cn = y - b; 

         if(dn + cn <= c)cout << "YES"<<endl;
         else cout << "NO" << endl;
     }

}
