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

  string s; cin>>s;
  int cnt0 = 0, cnt1 = 0,ze = 0, one = 0,ans = 0;
 for(int i = 0; i<s.size() ;i++)
 {
    if(s[i] == '0') cnt0++;
    else cnt1++;
 } 

 for(int i = 0; i<s.size() ;i++)
 {
    if(s[i] == '0') ze++;
    else one++;
    if(ze <= cnt1 and one <= cnt0)
        ans = i+1;
 } 
  cout<< s.size() - ans<<nl;
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
    


