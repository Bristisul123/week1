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

  int n,k; cin>>n>>k;
  
  vector<int> v(n),v2(k),a;
 
for(int i = 0; i<n;i++)
    cin>>v[i];

 for(int i = 0; i<k ;i++)
    cin>>v2[i];
   sort(all(v));
   
   for(int i = 0; i<k ;i++)
    {
     cout<< upper_bound(all(v),v2[i]) - v.begin()<<" ";
    }
   
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
    


