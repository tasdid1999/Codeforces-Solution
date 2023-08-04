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
        
        if(s.size() == 1)
        {
            char x = toupper(s[0]);

            cout << "Bob" << " "<< (int)x - 65 + 1<< endl;
        }
        else 
        {
            if(s.size() % 2 == 1)
            {
                int totalsum = 0;

                for(int i = 0 ;  i< s.size() ; i++)
                {
                    totalsum+=((int)toupper(s[i]) - 65 + 1);
                }

                int  right = totalsum - ((int)toupper(s[0])- 65 + 1);
                int left = totalsum - ((int)toupper(s[s.size()-1]) - 65 + 1);

                if(right > left)
                {
                    cout << "Alice " << right - ((int)toupper(s[0]) - 65 + 1 ) << endl;
                }
               
                else
                {
                    cout << "Alice " << left - ((int)toupper(s[s.size()-1]) - 65 + 1 ) << endl;
                }

            }
            else
            {
                int sum = 0;
                for(int i = 0 ; i < s.size() ; i++)
                {
                    sum+=((int)toupper(s[i]) - 65 + 1);
                }

                cout << "Alice " << sum << endl;
            }
        }

     }

     
}