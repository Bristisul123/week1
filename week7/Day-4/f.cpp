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

  int n,cnt = 0; cin>>n;
  vector<int>a(n),b(n),ans(n) ;
  for(int i=0;i<n;i++)
    cin>>a[i];
 for(int i=0;i<n;i++) cin>>b[i];
sort(all(a));
sort(all(b));
 for(int i = 0; i < n;i++)
 {
    if(a[i] != b[i] and a[i] + 1 != b[i] )
      { no;return;}
 }
 yes;

 
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
    


