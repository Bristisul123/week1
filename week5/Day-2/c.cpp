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
  int n;
  string s, ans = ""; cin>>n>>s;
  
   for(int i=0;i<n;i++){
      if(i+2<n and s[i+2]=='0'  and(i+3 >=n  or s[i+3] != '0'))
       {
        ans +=((s[i]-'0')*10)+(s[i+1]-'0')-1+'a';
          i+=2;
       } 
       else
        ans += ((s[i] - '0')-1+'a');

  }
   cout <<ans << nl;
     
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
    


