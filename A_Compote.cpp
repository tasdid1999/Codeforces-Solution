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

     int a , b , c;
     cin >> a >> b >> c;

     int x = a;
     int y = b / 2;
     int z = c / 4;

     int ans = min(x,min(y,z));

     cout << ans*4 + ans*2 + ans << endl;
    
}
