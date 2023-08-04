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
        long long n , k;
        cin >> n >> k;

        long long a[n];
        map<long long , int>mp;
        map<long long , int>pp;
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
            
            if(mp.find(a[i])== mp.end() )mp[a[i]] = i;
        
        }

        for(int i = n-1; i >= 0 ; i--)
        {
            if(pp.find(a[i]) == pp.end())pp[a[i]] = i;
        }

         while(k--)
        {

              long long a , b;
              cin >> a >> b;

              long long left = LONG_LONG_MAX,right = LONG_LONG_MIN;

              if(mp.find(a) != mp.end())left = mp[a];
              if(pp.find(b) != pp.end())right = pp[b];

              if(left < right)cout << "YES"<<endl;
              else cout << "NO"<<endl;

        }


        
    }

}