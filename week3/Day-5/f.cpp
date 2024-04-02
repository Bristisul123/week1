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

  int n,ans = 0; cin>>n;
  string a; cin>>a;
  vector<int> v(n);
  
 for(int i = 0;i<n;i++)
 {
    if(a[i] == 'L') ans+=i;
    else ans+= n-i-1;
 }
 for(int i = 0;i<n;i++)
 {
    if(a[i] == 'L') v.push_back(n-i-1-i);
    else v.push_back(i-n+i+1);
 }
  sort(v.begin(),v.end(),greater<int>());

  for(int i = 0;i<n;i++)
{
    if(v[i] > 0)
      ans+=v[i];
      cout<<ans<<" ";   
}
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
    