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
     
     
     string s;
     cin >> s;

     if(s[0] < s[1])
     {
        s[0] = s[0] + 1;
     }

     for(int i = 0 ; i < s.size(); i++)s[i] = s[0];

     cout << s << endl;
    


    


     
}