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
         long long n;
         cin >> n;
         long long a[n];
         map<long long ,int>mp;
         for(int i = 0 ; i < n; i++)
         {
             cin >> a[i];
             mp[a[i]]++;
         }
         
         if(n == 1)
         {
             cout << 0 << endl;
             continue;
         }
         
         int s = INT_MIN;
         for(auto u : mp)
         {
             s = max(s , u.second);
         }
         if(s == n)
         {
             cout << 0 << endl;
             continue;
         }
         long long op = 0;
          n = n - s;
         while(1)
         {
            op++;
            if(n <= s)
            {
                op+=n;
                break;
            }
            else{

                n = n - s;
                op+=s;
                s+=s;
                
            }
         }
         cout << op << endl;
     }
}