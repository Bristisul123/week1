#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;
 
const int N = 2e5 + 5;
vector<int> adj[N];
vector<int> cnt(N,0);
bool vis[N];

void dfs(int n, int src)
{
    if(adj[n].size() == 1 and n != 1)
        cnt[n] = 1;
    for(int child : adj[n])
    {
        if(child != src)
        {
            dfs(child,n);
            cnt[n] += cnt[child];
        }
    }
}
void solve()
{ 

  int n; cin>>n;
 
  for(int i=0;i<=n;i++)
   {
       cnt[i] = 0;
       adj[i].clear();
   }
    for(int i = 0;i<n-1 ; i++)
    {
        int u,v; cin>>u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);
    int q; cin>>q;
    while(q--)
    {
        int x,y; cin>>x>>y;
        cout<< cnt[x] * cnt[y] <<nl;
    }
 
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


