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
  vector<int>a(n),b(n+1);
  for(int i=0;i<n;i++)
    cin>>a[i];

 for(int i = 1; i<=n;i++)
    b[i] = b[i-1] + a[i-1];

 int q; cin>> q;
 while(q--)
{
    int x; cin>>x;
    auto ans = lower_bound(all(b),x);
    cout<< ans - b.begin()<<nl;

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
    


