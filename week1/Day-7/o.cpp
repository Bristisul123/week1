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
  int n, ans = 0; 
  char m;
  cin>>n>>m;
 string s; cin>>s;
  vector<int> suff(n);

    if(s[n-1] == 'g')
       suff[n-1] = n-1;
     else
        suff[n-1] = -1;
for(int i=n-2; i>=0 ; i--){
    if(s[i]=='g')
      suff[i] = i;
    else
       suff[i] = suff[i+1];
    
    }
        
  for(int i = 0 ;i<n;i++){
        if(s[i] == m)
        {
          if(suff[i] == -1)
            ans = max(ans,suff[0]+n-i);
          else
            ans = max(ans,suff[i]-i);
        }
    }
     cout<<ans<<nl;
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
    


