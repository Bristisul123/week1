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

  int n,k,sum = 0, cnt = 0; cin >>n >>k;
  vector<int>v(n);

  for(int i=0;i<n;i++)
    cin>>v[i];

    sort(all(v));
    int mn = v[0];
    for(int i =0; i<n-1; i++)
      mn = min(mn,v[i+1]-v[i]);

   if(k > 2) cout<<0<<nl;

    else if(k ==1)
        cout<< mn <<nl;
  
    else{ 
        for (int i = 0; i < n; i++) for (int j = 0; j < i; j++) {
          int dif= v[i] - v[j];
            int p = lower_bound(all(v), dif) - begin(v);
            if (p < n) mn= min(mn, v[p] - dif);
            if (p > 0) mn = min(mn, dif - v[p - 1]);
      
      }
        cout<< mn <<nl;
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
    


