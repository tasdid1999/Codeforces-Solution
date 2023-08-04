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
     
     map<char , int>mp;

     mp['L'] = 3;
     mp['M'] = 2;
     mp['S'] = 1;
     long long tc;
     cin >> tc;

     while(tc--)
     {
        
        string s , p;
        cin >> s >> p;
        
            if(mp[s[s.size()-1]] > mp[p[p.size()-1]])cout<<">"<<endl;
            else if(mp[s[s.size()-1]] < mp[p[p.size()-1]])cout<<"<"<<endl;
            else if(mp[s[s.size()-1]] == mp[p[p.size()-1]])
            {
                 if(s.size() == p.size())cout<<"="<<endl;
                 else if(s[s.size()-1] == 'S')
                 {
                      if(s.size() > p.size())cout<<"<"<<endl;
                      else if(s.size() < p.size())cout<<">"<<endl;
                 }
                 else if(s[s.size()-1] == 'L')
                 {
                       if(s.size() > p.size())cout<<">"<<endl;
                      else if(s.size() < p.size())cout<<"<"<<endl;
                 }
            }
        

       

     }

}