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

vector<int> g[1002];

void solve()
{ 

  int n, ans = -1; cin>>n;
  vector<int>co[1002];
  for(int i= 1;i<= n;i++)
  {
     int x; cin>>x;
     co[x].push_back(i);
  }

  for(int i = 1; i<= 1000 ; i++)
  {
     for(auto j : g[i])
     {
        if(!co[i].empty() and ! co[j].empty())
            ans = max(ans, co[i].back()+co[j].back());
        
     }
  }
  cout<< ans <<nl;
 
}
int32_t main()
{
    for(int i = 1; i<= 1000 ; i++)
    {
        for(int j = 0; j<= 1000 ; j++)
        {
            if(__gcd(i,j) == 1)
                g[i].push_back(j);
        }
    }
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


