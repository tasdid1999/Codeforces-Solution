#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007
int mx = 10e6;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

     long long n,temp;
     cin >> n;
     temp = n;
     map<pair<int, int>,int> mp;
     while( temp-- )
     {
         int x,y;
         cin >> x >> y;

         mp[{x,y}]++;
         
        
     }
     
     int mx = -1;

     for(auto u : mp)
     {
         if(u.second > mx) mx = u.second;
     }

     cout << mx  << endl;
     

    
    
}
