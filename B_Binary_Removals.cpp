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
        string s;
        cin >> s;

        if(is_sorted(s.begin(), s.end()))cout << "YES"<<endl;
        else
        {
            bool flag1 = false , flag2 = false;
            int in = -1;

            for(int i = s.size()-1; i > 0 ; i--)
            {
                if(s[i] == '0' && s[i-1] == '0')
                {
                    flag1 = true;
                    in = i - 1;
                    break;
                }
            }
            for(int i = in; i > 0; i--)
            {
                if(s[i] == '1' && s[i-1] == '1')
                {
                    flag2 = true;
                    break;
                }
            }

            if(flag1 && flag2)cout <<"NO"<<endl;
            else cout << "YES"<<endl;

        }
     }
}