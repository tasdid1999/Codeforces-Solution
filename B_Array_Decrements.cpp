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
        int n;
        cin >> n;

        int a[n] , b[n];

        for(int i = 0 ; i < n; i++)cin >> a[i];

        vector<int>v;
        vector<int>z;
        for(int i = 0 ; i < n; i++)
        {
            cin >> b[i];
            if(b[i] != 0)
            {
                v.push_back(a[i] - b[i]);
            }
            else if(b[i] == 0)
            {
                z.push_back(a[i]);
            }
        }
        if(n == 1)
        {
            if(a[0] > b[0])cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        if(v.size() == 1)
        {
            if(v[0] < 0)cout << "NO" << endl;
            else cout << "YES"<<endl;
        }
        else
        {
            int mx;
            if(z.size() == 0)mx = -1;
            else
            {
                for(int i = 0 ; i < z.size(); i++)
                {
                    mx = max(mx,z[i]);
                }
            }
            

            
            bool flag = false;
            for(int i = 0 ; i < v.size()-1; i++)
            {
                if(v[i] != v[i+1] || v[i] < 0 || v[i] < mx)
                {
                    flag = true;
                    break;
                }
            }

            if(flag)cout << "NO" << endl;
            else cout << "YES" << endl;
        }
     }

}