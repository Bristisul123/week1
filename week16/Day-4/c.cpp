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


void solve()
{ 

  int n,m,k,sum = 0, cnt = 0; cin >>n>>k;
  vector<int>v(n);
  map<int,int>mp;
int q = k, p =0;
  for(int i=0;i<n;i++){
     cin>>v[i];
     v[i]--;
  }
  vector<vector<int>> mat(k);
  vector<int>ans(k);
   
   for(int i =0; i<n; i++)
      mat[v[i]].push_back(i);

int l = INT_MAX, r = 0;
    for(int i = k-1; i>=0 ;i--)
    {
       for(auto & j : mat[i]){
       l = min(l,j), r = max(r,j);
    }
    if(mat[i].empty())  ans.push_back(0);
    else ans[i] = 2*(r-l+1);
  }
  for(int i = 0; i<k ; i++)
    cout << ans[i]<<" ";
    cout<<nl;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


