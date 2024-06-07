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

  int n,k,q; cin>>n>>k>>q;
  vector<int>a(k+1),b(k+1);
  for(int i=1;i<=k;i++)
    cin>>a[i];

for(int i = 1; i<= k ;i++)
     cin>> b[i];
 while(q--)
 {
    int d; cin>>d;
    int val = lower_bound(a.begin(),a.end(),d)-a.begin();
    if(a[val] == d) cout<< b[val]<< " ";
    else
    {
      int x = a[val] - a[val -1];
      int y = b[val] - b[val - 1];
      cout<< b[val -1] + ((d-a[val -1]) *y/x) <<" ";
    }
 } cout<< nl;
 
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
    


