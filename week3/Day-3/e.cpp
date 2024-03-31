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

  int n, mx = 0, val = 0,ans = 0; cin>>n;
  int a[n][n-1];
  map<int,int> mp;
  for(int i=0;i<n;i++){
    for(int j = 0 ;j < n-1;j++)
    {
      cin>>a[i][j];
      mp[a[i][0]]++;
    }
  }
  for(auto i : mp){
      //cout<<i.first<<"->"<<i.second<<" ";
    if(i.second > mx) 
    {
        mx = i.second;
        val = i.first;
    }
  }  
    cout<<val<<" ";
   for(int j = 0 ;j < n;j++)
    {
       if (val != a[j][0]) {ans = j;break;}
    
} //cout<< ans<<nl;
for(int j = 0 ;j < n-1;j++)
    cout<<a[ans][j]<<" ";
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
    