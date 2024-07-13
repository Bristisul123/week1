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

  for(int i=0;i<n;i++)
    cin>>v[i];

  if(n == 1) { cout<< max(0LL,v[0])<<nl; return;}
  
  for(int i = 2 ; i< n; i++)
{
    if(v[i] > 0)
    sum += v[i];
  }
 sum += max(v[0]+max(v[1],0LL),0LL);
   cout<< sum <<nl;
    

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
    


