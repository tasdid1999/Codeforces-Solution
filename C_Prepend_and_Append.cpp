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
          int n;
          cin >> n;
          string s;
          cin >> s;
         
          int i = 0 , j = s.size()-1;

          while(i < j)
          {
               if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
               {
                  i++;
                  j--;
               }
               else break;
          }

         if(i == j)cout << 1 << endl;
         else if(i > j)cout << 0 << endl;
         else cout << (j - i) + 1 << endl;
     }

}
