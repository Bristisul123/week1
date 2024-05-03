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

int n, k;
vector<int>a;
bool ok(int mid)
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
         cnt += (mid / a[i]);
        if(cnt >= k) return 1;
    }
    return 0;
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>k;
 for(int i = 0; i<n;i++) {
     int x; cin>>x;
     a.push_back(x);
 }

  sort(a.begin(),a.end());

int l = 1,r = 1e18, mid, ans = 0;
while(l<=r)
{
    mid = (l+r)/2 ;
    if(ok(mid))
         ans= mid, r= mid - 1;

     else  l = mid + 1;
 }
   cout<< ans <<nl;
}