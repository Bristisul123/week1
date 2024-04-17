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
   int n ; cin>>n;
  vector <int> a(n);
   for(int i = 0 ; i<n ;i++)
        cin>>a[i];
      int flag = 0;
    for(int i = 0; i<(1<<n) ;i++)
    {
      int ans = 0;
      for(int j = 0; j<n;j++)
      {
        if((1<<j) & i) ans += a[j];
        else ans -= a[j];
      }
      if(ans %360 == 0) flag = 1;
    } 
    if(flag) yes;
    else no;

}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1;  //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


