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
         
          int v[n+1];
          for(int i = 1; i <=n; i++)v[i] = i;
          long long cst = 0;
          int z = 0;
          int o = 0;
          map<int ,int>hobe;
          map<int ,int>hobena;
          int ind = 0;
          for(int i  = 0 ; i < s.size(); i++)
          {
              if(s[i] == '0') 
              {
                hobena[i+1] = 1;
               
              
               z++;

              }
              else  {
               o++;
                hobe[i+1] = 1;
               
              }
          }

          if(z == n)
          {
               cout << n << endl;
          }
          else if(o == n)cout <<0 << endl;
          else
          {
               for(int i = 1 ; i <=n; i++)
              {
                  
                      int cnt = 1;
                      for(int j = i ; j <=n; j = cnt * i)
                      {
                         if(hobena[v[j]] && v[j] != -1)
                         {
                          cst+=i;
                          v[j] = -1;
                          cnt++;
                         }
                         else if(hobe[v[j]])break;
                         else cnt++;
                      }
                  }

                  cout << cst << endl;
          }
             
                  
              
          
     }

}