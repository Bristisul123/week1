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
         vector<string>s(n);
         map<string ,int>mp;
      for(int i=0;i<n;i++){
       cin>>s[i];

}  string ans=" ",result;
     for(int i=n-1;i>=0;i--){
       result=s[i];
       mp[s[i]]++;
          if(mp[s[i]]==1){ 
             ans.push_back(result[result.size()-2]);
             ans.push_back(result[result.size()-1]);
       }
     }cout<<ans;
    
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    