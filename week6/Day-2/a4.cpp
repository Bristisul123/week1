#include <bits/stdc++.h>
#define ll long long
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
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a.begin(), a.end());
  int q; cin>>q;
  while(q--)
  {
    int l,r; cin>>l>>r;
    int left = lower_bound(a.begin(),a.end(),l) - a.begin();
    int right = upper_bound(a.begin(),a.end(),r) - a.begin();
    cout<<  right - left << " ";
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
    


