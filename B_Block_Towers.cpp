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
         long long n;
         cin  >> n;

         long long a[n];
         long long mx = INT_MIN;

         for(int i = 0 ; i < n; i++)
         {
            cin >> a[i];
            mx = max(mx,a[i]);
         }
         long long fst = a[0];
         sort(a,a+n);

         vector<long long>v;

         for(int i = 0 ; i < n;i++)
         {
            if(a[i] > fst && a[i]<=mx)v.push_back(a[i]);
         }
       // for(auto u : v)cout << u << ' ';
         for(int i = 0 ; i < v.size(); i++)
         {
            if(v[i] > fst)
            {
                
                    if((v[i]-fst) % 2 == 0)fst+=((v[i]-fst)/2);
                    else fst+=(((v[i]-fst)/2)+1);
                
                
            }
         }

         cout << fst<<endl;

         


     }


}