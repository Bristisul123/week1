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
     string s,s2; cin>>s>>s2;
     bool flag = 0;
    for(int i = 0;i<n; i++)
    {
        if(s[i] != s2[i]){
      if(s[i] == 'R' || s2[i] == 'R')
          flag = 1;
      }
    } 
   if(!flag) yes;
   else no;
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
    


