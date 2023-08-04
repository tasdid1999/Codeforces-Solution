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

     string a , b;
     cin >> a >> b;

     for(int i = 0; i < a.size(); i++)
     {
         if(a[i] != '0')break;
         else a[i] = '*';
     }
     for(int i = 0; i < b.size(); i++)
     {
         if(b[i] != '0')break;
         else b[i] = '*';
     }
     
     string ans1 = "";
     for(int i = 0 ; i < a.size(); i++)
     {
           if(a[i] != '*')ans1+=a[i];
     }
     string ans2 = "";
     for(int i = 0 ; i < b.size(); i++)
     {
           if(b[i] != '*')ans2+=b[i];
     }

     if(ans1.size() > ans2.size())
     {
         cout << ">" << endl;
     }
     else if(ans1.size() < ans2.size())
     {
         cout << "<" << endl;
     }
     else
     {
          int flag1 = 0, flag2 = 0;

          for(int i = 0 ; i < ans1.size(); i++)
          {
              if((ans1[i]-48) > (ans2[i] - 48) )
              {
                  flag1 = 1;
                  break;
              }
              else if((ans1[i]-48) < (ans2[i] - 48) )
              {
                    flag2 = 1;
                    break;
              }
          }

          if(flag1 == 1)
          {
              cout << ">" << endl;
          }
          else if(flag2 == 1)
          {
              cout << "<" << endl;
          }
          else 
          {
              cout << "=" << endl;
          }

     }
    
}
