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

  int n,m,ans= 0, cnt = 0; cin >>n>>m;
 if(n >= m){
      if(n % 2 == 0)  ans = n*n - (m -1);
      else  ans = (n-1)*(n-1) + (m - 1) + 1;
 }
 else
 {
    if(m % 2 != 0)  ans = m*m - (n -1);
      else  ans = (m-1)*(m-1) + (n - 1) + 1;
 }
  cout << ans <<nl;
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
    


