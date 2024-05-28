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
  
  vector<int> v;
 
 for(int i = 1 ; i<= 33; i++)
 {
    int x = 1LL << i;
    int val = (n + (x/2))/x;
    if(k <= val)
    {
        cout<< k*x - x/2 <<nl;
        return;
    }
    else k -= val;
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
    


