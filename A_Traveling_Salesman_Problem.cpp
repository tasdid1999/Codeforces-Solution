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
        long long n;
        cin >> n;
        unsigned long long sum = 0;
        vector<int>px;
        vector<int>nx;
        vector<int>py;
        vector<int>ny;
        while(n--)
        {
            long long x , y;
            cin >> x >> y;
            if(x == 0 && y > 0)py.push_back(y);
            else if(x == 0 && y < 0)ny.push_back(abs(y));
            else if(y == 0 && x > 0)px.push_back(x);
            else if(y == 0 && x < 0)nx.push_back(abs(x));  
        
        }

        if(px.size() > 0)
        {
        int mx = px[0];
        for(int i = 0 ; i < px.size(); i++)mx = max(mx,px[i]);
        sum+=(mx * 2);
        }
        if(nx.size() > 0)
        {
        int mx = nx[0];
        for(int i = 0 ; i < nx.size(); i++)mx = max(mx,nx[i]);
        sum+=(mx * 2);
        }
        if(py.size() > 0)
        {
        int mx = py[0];
        for(int i = 0 ; i < py.size(); i++)mx = max(mx,py[i]);
        sum+=(mx * 2);
        }
        if(ny.size() > 0)
        {
        int mx = ny[0];
        for(int i = 0 ; i < ny.size(); i++)mx = max(mx,ny[i]);
        sum+=(mx * 2);
        }
        cout << sum << endl;
        
     }
}