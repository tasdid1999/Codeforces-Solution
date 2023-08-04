#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

set<int>s;

void numberOfDivisors(int n)
{
      for(int i = 2; i < n; i++ )
      {
          if( n % i == 0)s.insert(i);
      }
}
bool isprime(int n)
{
    for(int i =2 ; i * i <= n; i++)
    {
        if( n % i == 0 )return false;
    }

    return true;
}
bool checkAnswer(int n)
{
    numberOfDivisors(n);
     
     int cnt = 0;
    for(auto u : s ){

          if(isprime(u))cnt++;
    }

    s.clear();

    if(cnt == 2)return true;

    else return false;

}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

     ll n;

     cin >> n;
     
     int cnt = 0;

     for(int i = 1; i <=n; i++)
     {
         if(checkAnswer(i))cnt++;
     }

     cout << cnt << endl;
    
}
