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
         long long n,sum;
         cin >> n;
        
        sum = (n * (n + 1)) / 2;

        long long p = 1;

        while(p <= n)
        {
            sum-= (p * 2);

            p*=2;
        }
         
       cout << sum << endl;
         
     }
    
}
