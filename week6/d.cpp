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

  int n, m; cin>>n>>m;
 
 vector<int> a(n),b(n),c(n+1);
 for(int i =0; i<n;i++) cin>>a[i];
  b[0] = a[0] , c[0] = a[0];
 for(int i=1;i<n;i++)
     b[i]=max(b[i-1],a[i]);
      
       for(int i=1;i<n;i++)
         c[i]=a[i]+c[i-1];

       while(m--){
         int x; cin>>x;
         int y=upper_bound(b.begin(),b.end(),x)-b.begin();
         if(y==0){
            cout<<0<<' ';
         }
         else {
            cout<<c[y-1]<<' ';
         }
       }
      cout<< nl;
 
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
    


