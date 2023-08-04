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
         long long x;
         deque<long long>q;
        int cnt = 0;
         for(int i = 0 ; i < n; i++)
         {
             cin >> x;
             if(q.empty())q.push_back(x);
             else if(x <= q.front())q.push_front(x);
             else if(x >= q.back())q.push_back(x);
             else cnt++;
         }

         cout << cnt << endl;
     }
    
}
