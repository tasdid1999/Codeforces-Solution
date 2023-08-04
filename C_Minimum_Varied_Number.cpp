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
        if(n < 10)
        {
            cout << n << endl;
            continue;
        }

        string s = "123456789";
        int sum = 0;
        string ans = "";
        for(int i = s.size()-1; i > 0; i--)
        {
            sum+=(s[i] -48);
            ans+=s[i];
            if(sum == n)
            {
                cout << ans << endl;
                break;
            }
            if(n - sum < (s[i] - 48))
            {
                ans+=(to_string(n - sum));
                break;
            }

        }
          reverse(ans.begin(), ans.end());
         cout << ans << endl;
     }
}