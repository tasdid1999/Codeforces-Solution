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
        long long a , b , c;

        cin >> a >> b >> c;

        if((a == b) && (b == c) && (c == a))
        {
            cout << a+1 << " " << b+1<< " " << c+1<< endl;
        }
        else if(a > b && a > c)
        {
            cout << 0 << " " << (a-b)+1 << " " <<(a-c)+1 << endl;
        }
        else if(b > a && b > c)
        {
            cout << (b-a)+1 << " " << 0 << " " << (b-c)+1 << endl;
        }
        else if(c > a && c > b)
        {
            cout << (c-a)+1 << " " << (c-b)+1 << " " << 0 << endl;
        }
        else if(a == b && a > c)
        {
            cout << 1 << " " << 1 << " " << (a-c)+1 << endl; 
        }
        else if(a == c && a > b)
        {
            cout << 1 << " " << (a-b)+1 << " " << 1 << endl;
        }
        else if(b == c && b > a)
        {
            cout << (b-a)+1 << " " << 1 << " " << 1 << endl;
        }
    }
     
    
}
