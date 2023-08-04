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


     int x , y;

     cin >> x >> y;
     
     int a[x], b[y];
     int k , m;

     cin >> k >> m;

     for(int i = 0; i < x; i++)cin >> a[i];
     for(int i = 0; i < y; i++)cin >> b[i];

     if(a[k-1] < b[y-m])cout << "YES"<<endl;
     else cout << "NO" <<endl;
    
}
