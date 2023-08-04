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

     long long int n;
     cin >> n;
     
     vector<long long int>even,odd;
     long long int x;
      
     for(int i = 0; i < n; i++){
         
         cin >> x;
         if(x%2==0)even.push_back(x);
         else odd.push_back(x);
     }

     sort(odd.begin(),odd.end() , greater<int>());

     long long int sum = 0;

     for(int i = 0; i < even.size(); i++)sum+=even[i];

     if(odd.size()%2==0)
     {
         for(int i = 0; i < odd.size(); i++)sum+=odd[i];
     }
     else{
            for(int i = 0; i < odd.size()-1; i++)sum+=odd[i];

     }

     cout << sum << endl;


}
