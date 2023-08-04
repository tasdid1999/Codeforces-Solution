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

         int n, m;
         cin >> n >> m;

         string s , p;
         cin >> s >> p;

         bool ok = true , ok2 = true;

         for(int i  = 0 ; i < s.size()-1; i++)
         {
             if(s[i] == s[i+1])
             {
                  ok = false;
                  break;
             }
         }
            for(int i  = 0 ; i < p.size()-1; i++)
         {
             if(p[i] == p[i+1])
             {
                  ok2 = false;
                  break;
             }
         }

         if(ok && ok2)
         {
             cout << "YES"<<endl;
             
         }

         else if(ok == false && ok2 == false)
         {
             cout << "NO"<<endl;
            
         }
         else if(ok == false && ok2 == true)
         {
              if(s.size() < 2)cout << "NO"<<endl;
              else if(s[s.size()-1] == p[p.size()-1])cout << "NO"<<endl;
              else
              {
                 reverse(s.begin(),s.end());
              p+=s;
              int cnt = 0;
              for(int i = 0;  i < p.size()-1; i++)
              {
                  if(p[i] == p[i+1])cnt++;
              }

              if(cnt > 1)cout << "NO"<<endl;
              else cout << "YES"<<endl;
              }
             
         }
         else if(ok == true && ok2 == false)
         {
               if(p.size() < 2)cout << "NO"<<endl;
               else if(s[s.size()-1] == p[p.size()-1])cout << "NO"<<endl;
               else
               {
                   reverse(p.begin(),p.end());
                   s+=p;
                   int cnt = 0;
                   for(int i = 0 ; i < s.size()-1; i++)
                   {
                       if(s[i] == s[i+1])cnt++;
                   }

                   if(cnt > 1)cout << "NO"<<endl;
                   else cout << "YES"<<endl;
               }
         }

     }

}