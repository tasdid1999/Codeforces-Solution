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
        int a , b ,c;
        cin >> a >> b >> c;

        if(c <= a)cout << -1 << " " << b << endl;
        else
        {
            double per = (double)c / b;
            if(per >= a)
            {
                
                cout << 1 << " " << -1 << endl;

            }
            else
            {
                if(a <= c)cout << 1 << " "<<b << endl;
                else cout << -1 << " " << b << endl;
            }

        }
     }
}