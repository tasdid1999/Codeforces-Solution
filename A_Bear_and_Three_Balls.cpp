#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

bool check(int a , int b, int c)
{ 
    if(a == b || b == c || c == a)return false;

    int mx = max(a,max(b,c));
    int mn = min(a,min(b,c));

    if(mx - mn == 2  )return true;
    else return false;


}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

     int n;

     cin >> n;

     int a[n],flag = 0;

     for(int i = 0 ; i < n; i++)cin >> a[i];

     for(int i = 0; i < n; i++)
     {
         for(int j = i + 1; j < n; j++)
         {
             for(int k = j + 1; k < n; k++)
             {
                     
                     if(check(a[i],a[j],a[k]))
                     {
                         //cout << a[i] << " " << a[j] << " " << a[k] << endl;
                         cout << "YES" << endl;
                         flag = 1;
                         break;
                     }
             }

             if(flag)break;
         }

         if(flag)break;
     }


     if(flag == 0)cout << "NO" << endl;
    
}
