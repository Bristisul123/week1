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

  int n,q; cin>>n>>q;
  vector<int>a(n),v;
  for(int i=0;i<n;i++){
    cin>>a[i];
 }
  for(int i=0;i<q;i++){
    int s; cin>>s;
    if(v.empty() or (v.back() > s))
    v.push_back(s);
 }
 for(int i = 0; i<n;i++){
  for(auto it : v)
  {
      if(a[i] % (1<<it) == 0)
      {
        it = it-1;
        a[i] += (1<<it);
      }
     }
  }
   for(auto it : a)
     cout<< it<<" ";
 cout<< nl;
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
    

 