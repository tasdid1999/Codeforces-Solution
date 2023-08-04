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

    long long int n;
     cin >> n;

    long long int take = n % 10;

     if(take >= 0 && take <= 5)n = n - take;
     else{

         take = 10 - take;
         n = n + take;
     }
    
    cout << n << endl;
}
