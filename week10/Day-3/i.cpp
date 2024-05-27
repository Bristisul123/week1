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

  int a,n,sum = 0, cnt = 0; cin >>n>> a;
  vector<int>v(n);
  map<int, int> mp;
  mp[sum] = 1;
  for(int i=0;i<n;i++){
    cin>>v[i];
     sum += v[i];
     if(mp[sum - a])
        cnt++;
     mp[sum] = 1; 
  }
    cout<< cnt ;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1;// cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


