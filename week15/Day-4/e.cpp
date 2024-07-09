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
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
 sort(all(a));

 int i = 0, j = n/2, ans = n;
    while( i < n/2 and j < n)
    {
       if(a[i]!=a[j])  ans-=2;
       if(a[i]==a[j])  j++;
       else
            i++, j++;
        }
    cout<<ans<<nl;
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
    


