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
          long long n , k;
          cin >> n >> k;

          long long a[n];
          for(int i = 0 ; i < n; i++)cin >> a[i];

          int cnt = 0;
        for(int i = 1 ; i <=k; i++)
        {
             bool flag = false;
             for(int j = 0;j < k; j++)
             {
                 if(a[j] == i)
                 {
                    flag = true;
                    break;
                 }
             }

             if(flag == false)cnt++;
        }
          cout << cnt << endl;


     }

}