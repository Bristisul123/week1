#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end(),greater<int>()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{ 

  int n,q,sum = 0, ans = 0; cin >>n>>q;
  vector<int>v(n),a(n+1);

  for(int i=0;i<n;i++)
    cin>>v[i];

   sort(all(v));
    while(q--)
    {
        int l,r; cin>>l>>r;
        l--;
       a[l]++;
       a[r]--;
    }
    for(int i = 1; i<= n; i++)
        a[i] += a[i-1];
   
    sort(all(a));
 for(int i = 0; i<n; i++)
    ans += (a[i] *v[i]);

   cout<< ans <<nl; 
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
    


