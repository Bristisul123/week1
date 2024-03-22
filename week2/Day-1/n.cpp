#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{ 
      int n, m, ans = 0, cnt = -1; cin>>n>>m;
     string s,s2; cin>>s;
     map<char,int>mp;

    for(int i = 0;i<n; i++)
       mp[s[i]]++;
    for(auto i:mp)
    {
      //  cout<<i.second<<" ";
        if((i.second % 2) != 0) cnt++;
    }
   if(cnt<=m) yes
   else no 

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
    


