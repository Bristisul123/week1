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

  string s, s2; cin>>s>>s2;
  int n = s.size();
  int m = s2.size();
  if(s == s2) cout<<"="<<nl;
  else if(s[n-1] > s2[m-1])  cout<< "<"<<nl;
 else if(s[n-1] < s2[m-1] ) cout<<">"<<nl;
 else if( s[n-1] == s2[m-1]  and s[n-1] == 'S')
 {
   if(n>m) cout<<"<"<<nl;
   else cout<<">"<<nl;
 }
 else
 {
   if(n > m) cout<<">"<<nl;
   else cout<<"<"<<nl;
 }
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
    