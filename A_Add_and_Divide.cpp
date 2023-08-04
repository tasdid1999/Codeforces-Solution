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
         long long a , b;

         cin >> a >> b;

         if(b > a)cout << 1 << endl;

         else if(b == a)cout << 2 << endl;

         else{

             
             int cnt = 0;

           
             while(1)
             {
                 if( b > a)
                 {
                     cnt++;
                     break;
                 }
                 else  if( b == a)
                 {
                     cnt+=2;
                     break;
                 }
                 else{

                     b++;
                     a = a / b;
                     cnt+=2;
                 }
             }
        
             cout << cnt << endl;
         }
     }
    
}
