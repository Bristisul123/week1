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

  int n , m = 0, ans = 0; cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    m = m | a[i];
  } 
   ans = m;
  for(int i=0;i<n;i++){
     ans = min(ans, (ans|a[i]));
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
    


