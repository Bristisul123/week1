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

  int n,m, ans = 0; cin>>n>>m;
 vector<int>a,b;
 for(int i = 0;i<n;i++){

   int x; cin>>x;
   if(x > 0) a.push_back(x);
   if(x < 0) b.push_back(-x);
 }
 sort(all(a),greater<int>());
     sort(all(b),greater<int>());
   if(a.size() == 0)
   {
    if(b.size() != 0)
    {
        for(int i = 0;i<b.size();i+=m)
        {
            ans += b[i]*2;
        }
        ans -= b[0];
    }
    cout<< ans <<nl;

   }  
   else if(b.size() == 0)
   {
      if(a.size() != 0)
    {
        for(int i = 0;i<a.size();i+=m)
        {
            ans += a[i]*2;
        }
        ans -= a[0];
    }
    cout<< ans <<nl;
   }
   else
   { for(int i = 0;i<a.size();i+=m)
            ans += a[i]*2;
      for(int i = 0;i<b.size();i+=m)
            ans += b[i]*2;
     ans -= max(a[0],b[0]);
     cout<< ans<<nl;
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
    


