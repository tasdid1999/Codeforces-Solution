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
     
     double m[6],w[6],s,u,x = 500;

     cin >> m[1] >>m[2] >>m[3] >>m[4] >>m[5] >>w[1] >>w[2] >>w[3] >>w[4] >>w[5] >> s >> u;
     
     double ans = 0;
     for(int i = 1; i <= 5; i++)
     {
         double temp = (1 - (m[i] / 250)) * x * i - 50*w[i];
         double temp2 = 0.3 * x * i;

         ans+= max(temp,temp2);
     }
     
     
     cout << ans + ((s*100) - (u*50)) << endl;

    
}
