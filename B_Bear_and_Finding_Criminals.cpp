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


     int n ,x;
     cin >> n >> x;
     x--;
     int a[n];

     for(int i = 0 ; i < n; i++)cin >> a[i];

     int cnt = 0;
     if(a[x] == 1)cnt++;

     int i = x-1 , j = x+1;

     while(i >= 0 || (j < n))
     {
         int take;
         if(i >= 0 && j < n){

             take = a[i] + a[j];

             
            if(take == 2)cnt+=2;

         }else if(i >= 0){
            
            cnt+=a[i];

         }else{

             cnt+=a[j];
         }


         i--;
         j++;
     }
    
    cout << cnt << endl;
}
