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
           long long n;
           cin >> n;

           int a[n];
           for(int i = 0 ;  i< n; i++)
           {
              cin >> a[i];
           }

           string s;
           cin >> s;

           map<int , char>mp;
           bool f = true;
           for(int i = 0 ; i < s.size(); i++)
           {
               if(mp[a[i]] != 0)
               {
                   if(s[i] != mp[a[i]])
                   {
                       cout << "NO"<<endl;
                       f = false;
                       break;
                   }
                   
               }
               else mp[a[i]] = s[i];
           }

           if(f)cout <<"YES"<<endl;

     }


}