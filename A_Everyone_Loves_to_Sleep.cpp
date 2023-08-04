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
        int n , h , m;
        cin >> n >> h >> m;

        vector<pair<int ,int>>v;

        for(int i = 0 ; i < n; i++)
        {
            int x ,y;
            cin >> x >> y;
            v.push_back({x,y});
        }

        sort(v.begin(), v.end());

        int in = 0;
        bool flag = true;

        for(int i = 0 ; i < v.size(); i++)
        {
            if(v[i].first >= h)
            {
                in = i;
                break;
                flag = false;
                cout << "HI" << endl;
            }
        }
       cout << in << endl;
       if(true)
       {
             long long h1 = 24 * 60 - (v[in].first * 60 + v[in].second);

             long long h2 = h * 60 + m;

             long long diff = abs(h1 - h2);

             cout << diff /60 << " " << diff % 60 << endl;


       }
       else
       {
            long long h1 = v[in].first * 60 + v[in].second;

            long long h2 = h * 60 + m;

            long long diff = abs(h1 - h2);
            cout << "Hi " << diff << endl;
            cout << h1 / 60 << " " << h2 % 60 << endl;
       }
     }
}