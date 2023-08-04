#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.141592654
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007
vector<pair<int,int>>adj[1000005];
int vis[1000005];
int dis[1000000];
void bfs(int u)
{
        queue<pair<int,int>>q;
        vis[u] = 1;
        dis[u] = 0;
       q.push(u);
        while(!q.empty())
        {
             int v = q.front();
             q.pop();

             for(auto x : adj[v])
             {
                   if(vis[x.first] == 0)
                   {
                    dis[x.first] = dis[v]+ x.second;
                    q.push(x.first);
                    vis[x.first] = 1;
                   }
                   else
                   {
                        if(dis[v] + x.second < dis[x.first])
                        {
                               dis[x.first] = dis[v]+ x.second;
                        }
                   }
                  
             }
             //cout << v << " ";
        }
}
int main()
{
      

     int tc;
     cin >> tc;
     
     for(int c =1; c <= tc; c++)
     {

          
          int n ,m;
          cin >> n >> m;
          //cout << n << " "<< m << endl;
          for(int i = 0 ; i < m; i++)
          {
              int u , v,w;
              cin >> u >> v >> w;
              adj[u].push_back({v,w});
              adj[v].push_back({u,w});
              
          }

          bfs(1);
          
          if(dis[n] == -1)
          {
              printf("Case %d: Impossible\n",c);
          }
          else
          {
             printf("Case %d: %d\n",c,dis[n]);
          }
          memset(adj,0,sizeof(adj));
          memset(vis,0,sizeof(vis));
          memset(dis,-1,sizeof(dis));
     }

    
}