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
         string s;
         cin >> s;
         char ans[n][n];

         for(int i = 0 ; i < n; i++)
         {
             for(int j = 0 ; j < n; j++)
             {
                 ans[i][j] = '*';
             }
         }
         bool ok = false;
         for(int i = 0 ;i < n; i++)
         {
             if(s[i] == '1')
             {
                 for(int j = 0 ; j < n; j++)
                 {
                     if(i == j)ans[i][j] = 'X';
                     else if(ans[i][j] == '*')
                     {
                         ans[i][j] = '=';
                         ans[j][i] = '=';
                     }
                 }
             }
             else
             {
                 bool flag = false;
                 for(int j = 0 ; j < n; j++)
                 {
                     if(i == j)ans[i][j] = 'X';
                     else if(ans[i][j] == '*')
                     {
                         if(s[j] == '2' && flag == false)
                         {
                            ans[i][j] = '+';
                            ans[j][i] = '-';
                            flag = true;
                         }
                         else if(s[j] == '2' && flag == true)
                         {
                              ans[j][i] = '+';
                              ans[i][j] = '-';
                         }
                         
                     }
                     else if(ans[i][j] == '+')flag = true;
                 }

                 if(flag == false)
                 {
                     
                     ok = true;
                     cout << "NO"<<endl;
                     break;
                    
                 }
             }
         }

         if(ok)continue;
         
          if(s[n-1] == '1')
          {
             for(int i = 0 ; i < n; i++)
             {
                 if(ans[n-1][i] == '-')
                 {
                     cout << "NO"<<endl;
                     ok = true;
                     break;

                 }
             }
          }
          else
          {
              int cnt = 0;
              for(int i = 0 ; i < n; i++)
              {
                    if(ans[n-1][i] == '+')
                    {
                        cnt++;
                        break;
                    }
                    
              }
              if(cnt == 0)
              {
                  ok = true;
                  cout << "NO"<<endl;
              }
          }
          if(ok)continue;
         cout << "YES"<<endl;
         ans[n-1][n-1] = 'X';
         for(int i = 0 ; i < n; i++)
         {
             for(int j = 0 ; j < n; j++)
             {
                 cout << ans[i][j];
             }

             cout << endl;
         }
     
}
}