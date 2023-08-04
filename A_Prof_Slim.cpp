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
         long long n;
         cin >> n;
         vector<long long>v;
         int nc = 0;
         for(int i = 0 ; i < n; i++)
         {
             long long x;
             cin >> x;
             v.push_back(x);
             if(x < 0)nc++;
         }

         if(is_sorted(v.begin() , v.end()))cout << "YES"<<endl;
         else
         {
             for(int i = 0; i < nc; i++)
             {
                 if(v[i] > 0)v[i] = v[i] * -1;
             }
             for(int i = nc; i < v.size(); i++ )
             {
                 if(v[i] < 0) v[i] = v[i] * -1;
             }

             if(is_sorted(v.begin() , v.end()))cout << "YES" <<endl;
             else cout << "NO" << endl;
             
             
            
         }
     }
}