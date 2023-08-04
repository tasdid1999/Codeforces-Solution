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
          long long n , q;
          cin >> n >> q;

          long long a[n];
          long long tot = 0;

          for(int i = 0 ; i < n; i++)
          {
              cin >> a[i];
              tot+=a[i];
          }
              sort(a,a+n);
              reverse(a,a+n);
            a[0] = a[0];

            for(int i = 1; i < n; i++)a[i] = a[i-1] + a[i];
          while(q--)
          {
              int p;
              cin >> p;

              if(p > tot)
              {
                  cout << -1 << endl;
              }
              else
              {    
                   int left = 0 , right = n-1;
                   int in  = -1;
                   while(left < right)
                   {

                     int mid = (left + right) / 2;
                     if(a[mid] == p)
                     {
                        in = mid;
                        break;
                     }

                     
                     if(a[mid] > p)right = mid-1;
                     else left = mid + 1;
                   }
                   
                    if(in == -1)
                    {
                        if(a[left] >= p)cout << left+1 << endl;
                        else cout << left + 2<<endl;
                    }
                   else cout << in+1 << endl;
              }
          }



     }
}
