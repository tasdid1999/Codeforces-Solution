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

     int n , s;

     cin >> n >> s;

     vector<pair<int,int>>v;

     for(int i = 0; i < n; i++)
     {
         int x, y;
         cin >> x >> y;
         v.push_back({x,y});
     }

     sort(v.rbegin(),v.rend());

     int f = s, t = 0;

     for(auto u:v)
     {
         t = t + ( f - u.first);
         f = u.first;

         if(t < u.second)
         {
              t = t + (u.second - t);
         }
         
     }

     if(f > 0)
     {
         t = t + f;
     }
     
     cout << t << endl;
    
}
