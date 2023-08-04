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
         int a[n];
         for(int i = 0 ; i < n; i++)cin >> a[i];

        
         int left = -1 , right = -1;

         for(int i = 0 ; i < n-1; i++)
         {
             if(a[i] == a[i+1])
             {
                 left = i+1;
                 break;
             }
         }
         for(int i = n-1; i >=0 ; i--)
         {
             if(a[i] == a[i-1])
             {
                 right = i-1;
                 break;
             }
         }

         if(left == right && left != -1)cout << 1 << endl;
         else if(right < left)cout << 0 << endl;
         else cout << right - left << endl;
     }


}