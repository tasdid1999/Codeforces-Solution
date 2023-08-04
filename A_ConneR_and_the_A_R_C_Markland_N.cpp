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
         long long n , s , k , x;
         cin >> n >> s >> k;

         map<int , int>mp;

         for(int i = 0 ; i < k; i++)
         {
             cin >> x;
             mp[x] = 1;
             
         }
         if(mp[s] != 1)
         {
             cout << 0 << endl;
             continue;
         }

         int a1 = 0 , a2 = 0;

         for(int i = s; i <= n; i++)
         {
             if(mp[i] != 1)
             {
                 a1 = i;
                 break;
             }
         }
        for(int i = s-1; i > 0; i--)
         {
             if(mp[i] != 1)
             {
                 a2 = i;
                 break;
             }
         }

          if(a1 == 0)
          {
              cout << abs(s-a2) << endl;
              continue;
          }
          if(a2 == 0)
          {
              cout << abs(s-a1)<<endl;
              continue;
          }

          a1 = abs(s-a1);
          a2 = abs(s-a2);

          cout << min(a1,a2) << endl;

         }
     }
    

