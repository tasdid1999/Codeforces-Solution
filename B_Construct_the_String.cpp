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
         int n , a ,b;
         cin >> n >> a >> b;

         int rem = n % b;
         int div = n / b;
         
          string s = "";
         for(int i = 1; i <= div; i++)
         {
             int cnt = 0;
             for(char j = 'a' ; j <= 'z'; j++)
             {
                if(cnt == b)
                {
                    
                    break;

                }

                s+=j;

                cnt++;

             }
         }
          
         char takechar = 'a';
         for(int i = 1; i <= rem; i++)
         {
             s+=takechar;
             takechar++;
         }

         cout << s << endl;
     }
    
}
