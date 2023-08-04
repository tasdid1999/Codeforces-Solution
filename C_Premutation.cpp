#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

void init(int a[] , int n)
{
      for(int i = 0 ; i < n; i++)a[i] = 0;
}
void ini(int a[] , int n)
{
     for(int i = 0 ; i < n; i++)a[i] = n+100000;
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
     
     int tc;
     cin >> tc;

     while(tc--)
     {
         

          vector<vector<int>>v;
           
           int n;
           cin >> n;
           int pos[n+1];
           int age[n+1];
           init(pos , n+1);
           ini(age,n+1);
          for(int i = 0 ; i < n; i++)
          {
            vector<int>vp;
              for(int i = 0 ; i < n-1; i++)
              {
                 int x;
                 cin >> x;
                 vp.push_back(x);
                 if(pos[x] < i + 1)pos[x] = i + 1;
                 if(age[x] > i + 1)age[x] = i + 1;
              }
              v.push_back(vp);
          }

          int val1,val2;
          bool f = false;
          for(int i = 1; i < n + 1; i++)
          {
              for(int j = i + 1; j < n + 1; j ++)
              {
                  if(pos[i] == pos[j])
                  {
                     val1 = i;
                    
                     val2 = j;
                     f = true;
                     break;
                  }
                  if(f)break;
              }
          }

          if(age[val1] < age[val2])pos[val2]++;
          else pos[val1]++;

          vector<pair<int ,int>>vp;
          for(int i = 1; i < n+ 1; i++)
          {
            vp.push_back({pos[i] , i});
          }

          sort(vp.begin(),vp.end());

          for(int i = 0 ; i < vp.size(); i++)cout << vp[i].second<< ' ';

          cout << endl;



         
     }

}

