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
        int n;
        cin >> n;
        int a[n];
        map<int ,int>mp;
        for(int i = 0 ; i < n; i++)
        {
          cin >> a[i];
          mp[a[i]] = i;
        }
        if(is_sorted(a,a+n))
        {
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        int ind = -1;
        for(int i = n-1; i >= 0; i--)
        {
            if(flag)
            {
                ind = max(ind,mp[a[i]]);
                
            }
            else if(a[i] < a[i-1])
            {
                flag = true;
                ind = max(ind,mp[a[i-1]]);
               

            }
        }
        int cnt = 0;
       
        for(int i = ind; i >=0; i--)
        {
            if(mp[a[i]] != -1)
            {
                cnt++;
                mp[a[i]] = -1;
            }
        }

        cout << cnt << endl;
     

        }
}