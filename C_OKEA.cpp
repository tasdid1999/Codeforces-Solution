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
         int n , k;
         cin >> n >> k;

         int has_e = (n * k ) / 2;
         int has_o = (n * k ) - has_e;
         int need_e = (n / 2) * k; 
         int need_o = (n * k ) - need_e;
        
        if(has_e == need_e && has_o == need_o)
         {
             cout << "YES"<<endl;
             int odd = 1;
             int evn = 2;
             for(int i = 0 ; i < n; i++)
             {
                 if(i % 2 == 0)
                 {
                  for(int j = 0; j < k ; j++)
                  {
                      cout <<odd << " ";
                      odd+=2;
                  }

                  cout << endl;
                 }
                 else
                 {
                     for(int j = 0; j < k ; j++)
                  {
                      cout <<evn << " ";
                      evn+=2;
                  }

                  cout << endl;
                 }
             }
         }
         else
         {
             cout << "NO"<<endl;
         }
     }
}