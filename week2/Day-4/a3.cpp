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

  int n , m; cin>>n>>m;
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  int l = 0, r = 0, ans = 0, sum = 0;

  while(l<n)
  {
     sum+=a[l];
    if(sum<=m)
       ans += l-r+1;
 else
   {while(sum>m){
    sum -= a[r];
     r++;
   } 
   if(sum<=m)
       ans += l-r+1;
   }
   l++;
  }
cout<< ans;
 
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1;// cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


