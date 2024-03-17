#include <bits/stdc++.h>
#define int long long
#define nl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

void solve() { 
  int n ; cin>>n;
   string a[n],b[n],c[n];
   map<string,int> mp;
   for(int i = 0 ; i<n ;i++){
    cin>>a[i]; mp[a[i]]++;
   }
    for(int i = 0 ; i<n ;i++){
    cin>>b[i]; mp[b[i]]++;
   }
    for(int i = 0 ; i<n ;i++){
    cin>>c[i]; mp[c[i]]++;
   }
   int cnt = 0, cnt2 = 0, cnt3 = 0;
   for(int i = 0 ; i<n ;i++){
   // cout<<mp[a[i]]<<" "<<mp[b[i]]<<" "<<mp[c[i]];
     if(mp[a[i]] == 1) cnt+=3;
     else if(mp[a[i]] == 2) cnt+=1;
     if(mp[b[i]] == 1) cnt2+=3;
     else if(mp[b[i]] == 2) cnt2+=1;
     if(mp[c[i]] == 1) cnt3+=3;
     else if(mp[c[i]] == 2) cnt3+=1;
   }
   cout<<cnt <<" "<<cnt2<<" "<<cnt3<<nl;
}
   
int32_t main()
{
  ios::sync_with_stdio(false);
    cin.tie(NULL);
     int T; cin>>T;
      while(T--)
      {
          solve();
      }
      return 0;
  }