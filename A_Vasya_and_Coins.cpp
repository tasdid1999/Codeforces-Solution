#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);string s;

     int tc;
     cin >> tc;

     while(tc--)
     {
         int on , to;
         cin >> on >> to;

         if(on == 0)cout << 1 << endl;
         else if(to == 0)cout << on + 1 << endl;
         else cout << (2 * to) + on + 1 << endl;
     }
}