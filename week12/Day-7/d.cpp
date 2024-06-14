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

  int n; cin>>n;
  vector<int>a(n),v;
  map<int,int> mp,mp1;
  for(int i=0;i<n;i++){
    cin>>a[i];
     mp[a[i]] ++;
 }
  for(auto it : mp)
  {
      int x = it.first;
      int y = it.second;
     if( x <= n){
        for(int i = 1; i<y ;i++)
            v.push_back(x);
        mp1[x] = 1;
     }
     else {
        for(int i = 1; i<=y ; i++)
            v.push_back(x);
     }
  }
  int cnt = 1, ans = 0;

  for(int i = 0; i< v.size(); i++)
  {
    for(int j = cnt ; j <= n; j++)
    {
        if(mp1[j] == 1) cnt++;
        else break;
    }
    int x = (v[i]-1)/2;
    if(x >= cnt)
        cnt++, ans++;
    else{
     ans = -1; break;
    }
  }
    
   cout<< ans <<nl;
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
    


