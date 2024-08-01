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

  int n,h,ans = 0; cin>>h>>n;
  vector<int>a(n),c(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
   cin>>c[i];

   int l = 0,r = 1e12;
   while(l <= r)
   {
     int mid = (l+r)/2;
      int p = 0;
      for(int i=0;i<n;i++)
      {
        int x = 1 + mid/c[i];
        p += x*a[i];
        if(p >= h)break;
      }

      if(p >= h)
        ans = mid, r = mid -1;
    else l = mid + 1;
   }   
   cout<< ans+1 <<nl;
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
    


