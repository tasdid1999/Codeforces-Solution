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

          int a[n];
          for(int i = 0 ; i < n; i++)cin >> a[i];

          unsigned long long ans = 0 , i;

           for( i = 0 ; i < n; i++)
           {
               if(s[i] == '0' && s[i+1] == '1')
               {
                  if(a[i] > a[i+1])
                  {
                      s[i] = '1';
                      s[i+1] = '0';
                      ans+=a[i];
                  }
                  else
                  {
                      int temp = 0 , pick = a[i],j;
                      for( j = i+1; j < n; j++)
                      {
                         if(s[j] == '0')break;

                         if(s[j] == '1')
                         {
                            temp+=a[j];
                            if(a[j] < a[i])
                            {
                                s[j] = '0';
                                ans+=(temp-a[j]);
                                ans+=a[i];
                                i = j-1;
                                break;
                            }
                         }
                        
                      }

                     
                  }
               }
               else if(s[i] == '1' )ans+=a[i];
           }
         
           cout << ans << endl;

     }
}