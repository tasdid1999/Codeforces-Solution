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
          char a[8][8];

          for(int i = 0 ; i < 8 ; i++)
          {
              for(int j = 0; j < 8 ; j++)
              {
                  cin >> a[i][j];
              }
          }

          char ans = 'B';

         

          for(int i = 0 ; i < 8; i++)
          {

             int cntr = 0 , cntb = 0;
                  
              for(int j = 0 ; j < 8; j++)
              { 
                  if(a[i][j] == 'R')cntr++;
              }

              if(cntr == 8)
              {
                  ans = 'R';
                  break;
              }
              
          }

          cout<<ans <<endl;

      
     }
}