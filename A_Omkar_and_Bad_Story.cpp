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
     ll n,flag = 0;
     cin >> n;
     int a[n];
     for(int i = 0; i < n; i++)
     {
          cin >> a[i];

          if(a[i]<0)flag =1;
     }
    
    if(flag)cout << "NO" << endl;
    else{

           int mx = a[0];

           for(int i = 1; i < n; i++)
           {
               if(a[i] > mx)mx = a[i];
           }
           cout << "YES"<<endl;
           cout << mx + 1 << endl;

           for(int i = 0; i <= mx; i++)cout << i << " ";

           cout << endl;
    }

}

}
