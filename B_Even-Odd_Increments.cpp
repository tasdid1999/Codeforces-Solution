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
           long long n , q;

           cin >> n >> q;
           
           unsigned long long a[n];
           
           long long e = 0 , o = 0;
           unsigned long long sum = 0;
           for(int i = 0 ; i < n; i++)
           {
               cin >> a[i];
               sum+=a[i];
               if(a[i] % 2 == 0)e++;
               else o++;
           }

           while(q--)
           {
               long long f , v;

               cin >> f >> v;
               
               if(f == 0)
               {
                  
                  sum = sum + (v * e);
                    cout << sum <<endl;
                    if(v % 2 == 1)
                    {
                        o+=e;
                        e = 0;
                    }
               }
               else
               {  sum = sum + (v * o);
                   cout << sum<<endl;
                   if(v % 2 == 1)
                   {
                     
                      e+=o;
                       o = 0;
                   }
               }

              
           }


     
     }

}