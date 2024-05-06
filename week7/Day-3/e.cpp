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
   int n;  cin>>n;
     vector<int> v(n);
  for(int i = 0;i<n;i++) cin>>v[i];
   sort(v.begin(),v.end());
   int l = 0, r = 1e9, mid = 0, ans = 0;
 auto ok = [&](int mid)
 {
    int j =0,cnt = 1;
    for (int i = 0; i < n; ++i)
    {
        if(v[i] - v[j] > (2*mid))
            cnt++, j = i;
    }
    return cnt <= 3;
 };
   while(l<=r)
   {
     mid = (l+r)/2;

     if(ok(mid)) 
        ans = mid, r = mid - 1;
     else l = mid + 1;
   } 
   cout<< ans <<nl;
 
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
    


