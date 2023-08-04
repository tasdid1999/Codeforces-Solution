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

     int n;
     cin >> n;

     int a[n];

     for(int i = 0; i < n; i++)cin >> a[i];

     int cnt = 0,chest = 0, biseps = 0, back = 0;

     for(int i = 0; i < n; i++ )
     {
         if(cnt == 0)chest+=a[i];
         if(cnt == 1)biseps+=a[i];
         if(cnt == 2)back+=a[i];
        

         cnt = (cnt+1)%3;

     }

     if(chest > biseps && chest > back)cout << "chest" << endl;
     else if(biseps > chest && biseps > back) cout << "biceps" <<endl;
     else cout << "back" <<endl;
    
}
