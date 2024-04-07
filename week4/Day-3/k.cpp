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

  int n,m, cnt = 0; cin>>n>>m;
  vector<int>a(n),v;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if((a[i] &m) == m)
      v.push_back(a[i]);
  }
  if(v.empty()) no;
  else
  {
     cnt = v[0];
     for(int i=0;i<v.size();i++){
         cnt &= v[i];
     }
     if(cnt == m) yes;
     else no;
  }
 
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
    


