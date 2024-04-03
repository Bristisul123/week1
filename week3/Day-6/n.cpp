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
        vector<int>v(n);
        int cnt=0,ans=0,sum=0;
      for(int i=0;i<n;i++){
       cin>>v[i];
        
       if(v[i]<= 0){
          if(v[i]<0)
           cnt++ ;
       }
    else{
       if(cnt>0) ans++;
       cnt=0;
    }
      if(v[i]<0)
           v[i]*=-1;
       sum+=v[i];
      } 
      if(cnt>0) ans++;
      cout<<sum<<" "<<ans<<endl;
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
    