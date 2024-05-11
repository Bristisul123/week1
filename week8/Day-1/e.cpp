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
int cnt = 0,ans = n+1;
  string s; cin>>s;
  for(int i = 0; i< 26; i++)
  {
    int l = 0, r = n-1,cnt = 0;
    while(l<=r)
    {
        if(s[l] == s[r])
            l++,r--;
        else if(s[l] == char('a' + i))
            cnt++,l++;
        else if(s[r] == char('a' + i))
            cnt++,r--;
        else {
            cnt = n+1; break;
        }
        //cout<<l<<" "<<r<<nl;
    }
    ans = min(ans, cnt);
    //cout<<l<<" "<<r<<nl;
  }
  if(ans == n+1) cout<<-1<<nl;
  else
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
    


