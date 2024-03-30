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

   int n;cin >> n;
   vector<string> v(n),v2(n);
    map<string, int> mp;
 for (int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    string ans = " ";
    for(auto i : v){
    bool f = false;
      for(int j = 0 ; j< i.size();j++)
      {
        string s = i.substr(0,j);
        string s2 = i.substr(j,i.size()-j);
       if(mp[s] > 0 and mp[s2] > 0)
       {
         ans+='1';
        f = true;
        break;
       } 
      }
      if(!f) ans += '0';
 }  
 cout << ans<< nl;
        
 
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
    
