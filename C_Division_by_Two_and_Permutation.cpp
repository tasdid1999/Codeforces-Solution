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
           int n;
           cin >> n;

           int a[n];

           for(int i = 0 ; i < n; i++)cin >> a[i];

           int vis[n+1];

           for(int i = 1; i <= n ; i++)vis[i] = 0;

           sort(a , a+n);
           reverse(a , a+n);

           for(int i = 0 ; i < n; i++)
           {
               if(a[i] <= n)
               {
                  if(vis[a[i]] == 0)vis[a[i]] = 1;
                  else
                  {
                      int tem = a[i];
                      while(tem > 0)
                      {
                          if(tem <= n && vis[tem] == 0)
                          {
                             vis[tem] = 1;
                             break;
                          }
                          tem = tem/2;
                      }
                  }
               }
               else
               {
                    int temp = a[i];

                    while(temp > 0)
                    {
                         if(temp <= n && vis[temp] == 0)
                         {
                             vis[temp] = 1;
                             break;
                         }

                         temp = temp / 2;
                    }
               }
           }
           bool flag = true;
           for(int i = 1; i <= n; i++)
           {
              if(vis[i] == 0)
              {
                 flag = false;
                 break;
              }
           }

           if(flag)cout << "YES"<<endl;
           else cout << "NO"<<endl;
     }

}