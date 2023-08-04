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
            string s;
            cin >> s;
             if(is_sorted(s.begin(),s.end()))
             {
                cout << s << endl;
                continue;
             }

            char curr = '9';
            vector<int>v;
     
     for(int i = s.size()-1; i >= 0; i--)
     {
         if(s[i] < curr)
         {
            v.push_back(s[i]-48);
            curr = s[i];
         }
         else if(s[i] > curr)
         {
             v.push_back(min((s[i]-48)+1,9));
         }
         else v.push_back(s[i]-48);
     }
     
       sort(v.begin(),v.end());

       for(auto u : v)cout << u;

       cout << endl;
     }

    

}