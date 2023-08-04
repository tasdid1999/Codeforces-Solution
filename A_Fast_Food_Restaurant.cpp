#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int check (int a , int b, int c)
{
      int cnt = 0;

         if(a > 0){cnt++; a--;}
         
         
         if(b > 0){cnt++ ; b--;}
         

         if(c > 0){cnt++ ; c--;}
        

         if(a > 0 && b > 0){cnt++ ; b--; a--;}
         

         if(a > 0 && c > 0){cnt++ ; c--; a--;}
         

         if(b > 0 && c > 0){cnt++ ; b--; c--;}
         

         if(a > 0 && b > 0 && c > 0){cnt++;}

        return cnt;
         

}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


     int tc;
     cin >> tc;

     while(tc--)
     {
         int a, b ,c;

         cin >> a >> b >> c;
         
         int ans = 0;

         ans = max(ans,check(a,b,c) );
          ans = max(ans,check(a,c,b) );
          ans = max(ans,check(b,c,a) );
           ans = max(ans,check(b,a,c) );
          ans = max(ans,check(c,a,b) );
          ans = max(ans,check(c,b,a) );
         
         cout << ans << endl;

     }
    
}
