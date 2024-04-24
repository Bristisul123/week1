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

  int n, k; cin>>n>>k;
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i = 0 ;i<k;i++){
    int key; cin>>key;
  int l = 0 , r = n-1, mid, ans = -1;
  while(l<=r)
  {
    mid=(l+r)/2;
    if(key <= a[mid])
    {
      ans = mid;
      r = mid -1;
    }
    else l = mid + 1;
  }
  if(ans == -1) cout<< n+1<<nl;
  else
    cout<< ans+1 <<nl;
  }
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


