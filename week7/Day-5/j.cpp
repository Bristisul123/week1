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


 int n,ans=0,cnt=2;
   cin>>n;
  if(n%2==0){
 for(int i=1;i<=n;i++){
  cout<<cnt<<" ";
  cnt+=2;
 }
  }else{
  for(int i=1;i<=n;i++)
    cout<<i<<" ";
}cout<<nl;
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
    


