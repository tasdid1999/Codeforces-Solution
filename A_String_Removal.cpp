#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);string s;

     int tc;
     cin >> tc;

     while(tc--)
     {
        string s;
        cin >> s;
        stack<char>st;

        for(int i = 0 ; i < s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i] == 'a' && st.top() == 'b')
                {
                    st.pop();
                }
                else if(s[i] == 'b' && st.top() == 'a')st.pop();
                
                else st.push(s[i]);
            }
        }

        if(st.empty())cout << "YES" <<endl;
        else cout << "NO"<<endl;
     }
}