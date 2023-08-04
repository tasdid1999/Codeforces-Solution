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

     while( tc-- )
     {
         int n,take1,take2;

         cin >> n;

         int vis[101];

         for(int i = 0 ; i <101; i++)vis[i] = 0;

         for(int i = 0; i < n; i++)
         {
             int x;
             cin >> x;
             vis[x]++;
         }

         for(int i = 0; i<101;i++)
         {
             if(vis[i] == 0){

                 take1 = i;
                 break;
             }else{
              
              vis[i]--;

             }
             
         }
         for(int i = 0; i<101;i++)
         {
             if(vis[i] == 0){

                 take2 = i;
                 break;
             }else{

                 vis[i]--;
             }
             
         }

         cout << take1 + take2 << endl;
     }
    
}
