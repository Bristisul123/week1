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
  int n, cnt = 0 , sum = 0; cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++)
    cin>>a[i];
   for(int i = 0;i<n;i++)
   {
     if(a[i] < 0) 
      cnt++, a[i] = -a[i];
    sum +=a[i];
   }
   sort(a.begin(),a.end());
   if(cnt % 2 != 0) cout<< sum - 2*a[0]<<nl;
    else   cout<<sum<<nl;
 
     
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
    


