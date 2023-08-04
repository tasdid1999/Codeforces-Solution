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
        int a[n];

        for(int i = 0 ; i < n; i++)cin >> a[i];
        
        if(n == 1)
        {
            cout << a[0] << endl;
            continue;
        }
        if(a[0] != n && a[n-1] != n)
        {
            cout << -1 << endl;
            continue;
        }

        if(a[0] == n)
        {
            vector<int>l;
            vector<int>r;
            for(int i = 1; i <=(n / 2); i++)l.push_back(a[i]);
            for(int i = (n / 2) + 1; i < n; i++)r.push_back(a[i]);

            reverse(l.begin() , l.end());
            reverse(r.begin() , r.end());

            for(int i = 0 ; i < l.size(); i++)cout << l[i] << " ";
            
            cout << n << " ";

            for(int i = 0 ; i < r.size(); i++)cout << r[i] << " ";

            cout << endl;
        }
        else
        {
            vector<int>l;
            vector<int>r;
            for(int i = 0; i < (n / 2); i++)l.push_back(a[i]);
            for(int i = (n / 2); i < n-1; i++)r.push_back(a[i]);

            reverse(l.begin() , l.end());
            reverse(r.begin() , r.end());

            for(int i = 0 ; i < l.size(); i++)cout << l[i] << " ";
            
            cout << n << " ";

            for(int i = 0 ; i < r.size(); i++)cout << r[i] << " ";

            cout << endl;
        }




     }

}