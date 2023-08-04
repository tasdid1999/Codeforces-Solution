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
          long long n;
          cin >> n;
          long long a[n];
           int cnt = 0;
          for(int i = 0 ; i < n; i++)
          {
            cin >> a[i];
            if(a[i] == 2)cnt++;
          }

          if(cnt == 0)
          {
              cout << 1 << endl;
          }
          else
          {
               int cnt2 = 0;
               bool f = true;
               for(int i = 0 ; i < n-1; i++)
               {
                  if(a[i] == 2)cnt2++;
                  if(cnt-cnt2 == 0)
                  {
                      cout << -1 << endl;
                      f = false;
                      break;
                  }
                  if((cnt-cnt2) == cnt2)
                  {
                      cout << i +1 << endl;
                      f = false;
                      break;
                  }
               }

               if(f)cout << -1 << endl;
          }
        
     }

}