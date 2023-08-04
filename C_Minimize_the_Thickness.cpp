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

         long long n;
         cin >> n;

         long long  a[n];

         for(int i = 0 ; i < n; i++)cin >> a[i];
         
         
         int i = 0;
         int sum = 0;
          while(1)
         {
               sum+=a[i];

              int seg = 1;

              stack<int>st;
              st.push(sum);
              int j = i + 1;
              while(1)
              { 
                 int s = 0;
                 for(int k = j ; k < j+seg; k++)s+=a[k];

                 if(st.top() == s)st.push(s);
                 else break;  
                 
              }


              i++;
              seg++;


         }
     }

}

