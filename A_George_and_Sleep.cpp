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

     string sh="" , sm="";
     string th="", tm="";
     string take,take2;

     cin >> take >> take2;

     sh = sh+take[0]+take[1];
     sm = sm+take[3]+take[4];
     th = th+take2[0]+take2[1];
     tm = tm+take2[3]+take2[4];


     long long wh = stoi(sh);
     long long wm = stoi(sm);
     long long nxh = stoi(th);
     long long nxm = stoi(tm);


     long long tm1 = wh*60+wm;
     long long tm2 = nxh*60+nxm;
     long long anstm = tm1 - tm2;
     if(anstm < 0) anstm = 24*60+anstm;

     printf("%.2lld:%.2lld\n",anstm/60,anstm%60);
}
