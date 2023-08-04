#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007
map<string , int>mp;
int counter = 1;
void pre()
{
    for(char i = 'a'; i <= 'z'; i++)
    {
          for(char j = 'a' ; j <= 'z'; j++)
          {
              if(i != j)
              {
                    string s = "";
                    s+=i;
                    s+=j;
                    mp[s] = counter;
                    counter++; 
              }
          }
    }
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
     
     pre();
     int tc;
     cin >> tc;

     while(tc--)
     {
         string s;
         cin >> s;

         cout << mp[s] << endl;
     }

}