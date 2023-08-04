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

     int n;
     cin >> n;

     int a[2*n];

     for(int i = 0; i < 2*n; i++)cin >> a[i];

     int cnt = 1 , take = a[0];

     for(int i = 1 ; i < 2*n; i++)
     {
         if(a[i] == take)cnt++;
     }
    if(cnt == 2*n)cout << -1 << endl;
    else{

        sort(a,a+(2*n));

        for(int i = 0 ; i < 2 * n; i++)cout << a[i]<< " ";

        cout << endl;
    }
}
