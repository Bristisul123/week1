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

  int n,sum = 0, cnt = 0; cin >>n;
  vector<int>v(n);
  map<int,int> f;
  for(int i=0;i<n;i++){
    cin>>v[i];
    f[v[i]]++;
  }
   for(int i =0; i<=n; i++){
      if(f[i] == 1)  cnt ++;
     if(cnt == 2 or f[i] == 0 ){
         cout<< i<<nl; 
         break;
    }
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
    