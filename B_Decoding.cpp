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
       
       int n;
       cin >> n;

       string s;
       cin >> s;

       string ans  = "";

       ans+=s[0];

       if(s.size()%2 == 0)
       {
           for(int i = 1; i < s.size(); i++){

               if(i%2 != 0){
                   ans+=s[i];
               }else{

                   ans = s[i]+ans;
               }
           }
       }else{

               for(int i = 1; i < s.size(); i++){

               if(i%2 != 0){
                   ans = s[i]+ans; 
               }else{
                     ans+=s[i];
                  
               }
           }

       }

       cout << ans << endl;
}
