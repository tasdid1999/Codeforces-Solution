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
        int n , r , b;
        cin >> n >> r >> b;

        b+=1;
        int ans = r / b;
        int rem = r % b;
        string res = "";
        
        for(int i = 1 ; i <= b; i++)
        {
            if(i <= rem)
            {
                for(int j = 1; j <= ans+1; j++)
                {
                    res+="R";
                }

                res+="B";
            }

            else if(i == b)
            {
                for(int j = 0 ; j < ans; j++)res+="R";
            }else
            {
                  for(int j = 0;  j < ans; j++)res+="R";

                  res+="B";
            }


        }
           cout << res << endl;
     }

}