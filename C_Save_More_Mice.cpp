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

     while(tc-- )
     {
        int n , k;
        cin >> n >> k;
        vector<int>a;
       
        for(int i = 0 ; i < k; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);

        }

        sort(a.begin(),a.end());

        int cnt  = 0;
        int cat = 0;
        int mouse;
        for(int i = k-1; i >=0 ; i--)
        {
             mouse = a[i];

             if(cat>=mouse)break;

             int ans = n - mouse;
             cat+=ans;
             cnt++;
        }
        
        cout << cnt << endl;
             
             
    }
}