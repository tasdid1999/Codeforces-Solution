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

     string F, M , S;

     cin >> F >> M >> S;

     int r = 0 , p = 0 , s = 0;

     if(F[0] == 'r')r++;
     if(F[0] == 'p')p++;
     if(F[0] == 's')s++;

     if(M[0] == 'r')r++;
     if(M[0] == 'p')p++;
     if(M[0] == 's')s++;

     if(S[0] == 'r')r++;
     if(S[0] == 'p')p++;
     if(S[0] == 's')s++;

     
     if(r == 1 && s == 2)
     {
           if(F[0] == 'r')cout << "F" << endl;
           else if(M[0] == 'r')cout << "M" << endl;
           else cout << "S" << endl;
     }
     else if(s == 1 && p == 2)
     {
           if(F[0] == 's')cout << "F" << endl;
           else if(M[0] == 's')cout << "M" << endl;
           else cout << "S" << endl;
     }
     else if(p == 1 && r == 2)
     {
           if(F[0] == 'p')cout << "F" << endl;
           else if(M[0] == 'p')cout << "M" << endl;
           else cout << "S" << endl;
     }
     else{

         cout << "?" << endl;
     }





    
}
