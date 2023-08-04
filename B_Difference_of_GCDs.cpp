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
         long long n , l ,r;
         cin >> n >> l >> r;

         if(n == 1)
         {
             cout <<"YES"<<endl;
             cout << l << endl;
             continue;
         }

         vector<int>v;
        bool flag = false;
         for(int i = 1; i <= n; i++)
         {
              if(l % i == 0)
              {
                  v.push_back(l);
              }
              else
              {
                   long long rem = l % i;
                   long long pick = i - rem;
                   if(l + pick > r)
                   {
                      flag = true;
                      break;
                   }
                   else v.push_back(l+pick);
              }
         }

         if(flag)cout << "NO"<<endl;

         else
         {
              cout << "YES"<<endl;
              for(auto u : v)cout << u << " ";

              cout << endl;
         }

     }

}