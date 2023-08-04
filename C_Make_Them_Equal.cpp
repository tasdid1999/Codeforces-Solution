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
         char x;
         cin >> x;
 
         string s;
         cin >> s;
        
         int cnt = 0 , index = -1;
         for(int i = 0 ; i < s.size(); i++)
         {
             if(s[i] == x)
             {
                 cnt++;
                 index = i + 1;
             }
             
         }

         if(cnt == n)
         {
             cout << 0 << endl;
             
         }
         else if(index == -1 || index == 1)
         {
             cout << 2 << endl;
             cout << n << " " << n-1 << endl;
             
         }
         
         else if(index*2 > n)
         {
             cout << 1 << endl;
             cout << index << endl;
         }
         else
         {
                if(n % index == 0)
                {
                    cout << 2 << endl;
                    cout << index << " " << n-1 << endl;
                }
                else 
                {
                    cout << 2 << endl;
                    cout << index << " " << n << endl;
                }
         }
         
        
        
         }
 
    }
    

