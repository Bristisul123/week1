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

vector<int> g[1002];

void solve()
{ 
  int l, r,a = 0,b = 0; cin>>l>>r;
  bool f = 0;
  for(int j = l; j<=r; j++){
   for(int i = 2; i*i <= j; i++)
   {
 if (j % i ==0) {
    a = i, b= j -i;
    f = 1;
   
    }
  }
    if(f) break;
 }
 if(f)cout<< a <<" "<<b<<nl;
 else cout<< -1<<nl;
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
    


