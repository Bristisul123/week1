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
   int n,m,ans = INT_MAX; cin>>n>>m;
    string s[n];
       for(int i=0;i<n;i++)
         cin>>s[i];

    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         int sum=0;

    for(int k=0;k<m;k++)
      sum+=abs(s[i][k] - s[j][k]);

      ans=min(sum,ans);
    }
  }
        cout<<ans<<endl;
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
    


