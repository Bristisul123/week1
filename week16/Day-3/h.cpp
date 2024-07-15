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

  int n,mx = INT_MAX, pos = 0; cin >>n;
  vector<int>v(n);

  for(int i=0;i<n;i++)  cin>>v[i];
  
    sort(all(v));

  if(n == 2) { cout<< v[0]<<" "<<v[1]<<nl; return;}
  
  for(int i = 0 ; i< n-1; i++)
{
    if(mx > abs(v[i] - v[i+1]))
     mx = abs(v[i] - v[i+1]), pos = i;
  }
 //cout<< pos <<nl;
for(int i = pos+1; i<n; i++)
   cout<< v[i]<< " ";
   
   for(int i = 0; i<= pos; i++)
     cout<< v[i] <<" ";
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
    


