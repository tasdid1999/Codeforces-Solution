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
          
          string s;
          cin >> s;

          vector<int>v;

          long long sum = 0 ;

          for(int i = 0 ; i < s.size(); i++)
          {
              if(s[i] == 'L')
              {
                 sum+=i;
                 v.push_back((s.size()-1-i)-i);

              }
              else
              {
                 sum+=(s.size()-1-i);
                 v.push_back(i - (s.size()-1-i));
              }
          }

          sort(v.begin(),v.end(),greater<int>());

          for(int i = 0 ; i < v.size(); i++)
          {
              if(v[i] > 0)sum+=v[i];

              cout << sum <<" ";

          }
          cout << endl;
          
         
     }

}