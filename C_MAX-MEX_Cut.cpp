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

     while(tc--)
     {
        int n;
        cin >> n;

        string s , p;
        cin >> s >> p;

        int cnt = 0;

        for(int i = 0 ; i < s.size(); i++)
        {
            if(i == s.size()-1)
            {
                if(s[i] == '0' && p[i] == '0')cnt+=1;
                else if(s[i] == '1' && p[i] == '1')cnt+=0;
                else  cnt+=2;
                
            }
            else
            {
                if(s[i] == '0' && p[i] == '0')
            {
                if(s[i+1] == '1' && p[i+1] == '1')
                {
                    cnt+=2;
                    i++;
                }
                else cnt+=1;
            }
            else if(s[i] == '1' && p[i] == '1')
            {
                if(s[i+1] == '0' && p[i+1] == '0')
                {
                    cnt+=2;
                    i++;
                }
            }
            else
            {
                cnt+=2;
            }
            }
        }

        cout << cnt << endl;
     }
}