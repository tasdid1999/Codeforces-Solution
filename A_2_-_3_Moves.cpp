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
        if(n == 2)cout << 1 << endl;
        else if(n == 1)cout << 2 << endl;
        else if(n % 3 ==0)cout << n /3 << endl;
        else cout << (n / 3) + 1 << endl;
     }
}