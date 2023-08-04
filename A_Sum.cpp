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
           int a , b ,c;
           cin >> a >> b >> c;

           if((a+b) == c)cout<<"YES"<<endl;
           else if((a+c) == b)cout<<"YES"<<endl;
           else if((b+c) == a)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
     }
}