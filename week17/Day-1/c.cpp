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
  string s; cin>>s;
  int ans = n;
  for(int i = 0; i< n; i++)
  {
     if(s[i] =='B') ans--;
     else break;
  }
  for(int i = n-1; i>0; i--)
  {
     if(s[i] =='A') ans--;
     else break;
  }
  if(ans > 0)
  cout<< ans-1 <<nl;
else cout<< 0<<nl;
 
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
    


