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

  int n,cnt = 0; cin>>n;
  int val = 32768 ,ans = 32768;
for(int i = 0; i<= 15; i++)
{
    int x = n + i;
    cnt = i;
    while(x !=0)
    {
        x %= val;
        if(x == 0) break;
        x *= 2;
        cnt++;
    }
    ans = min(ans, cnt);
}
  cout<< ans<<nl;
 
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
    


