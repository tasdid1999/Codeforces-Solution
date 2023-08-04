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
         long long a , b;
         cin >> a >> b;
         if(b == 1)cout << "NO" << endl;

         else if(b==2)
         {
              cout << "YES" << endl;
            cout << a*1 << " " << a*2 << " " << a*3 << endl;   

            
         }
         else{
                
               cout << "YES" << endl;
             cout << a*1 << " " << a * (b-1) << " "<< a * b << endl;
         }
     }
    
}
