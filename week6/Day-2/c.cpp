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

  int n, k; cin>>n >>k;
  vector<int>a(k);
 for(int i = 0 ;i<k ;i++) 
     cin>>a[i];
sort(all(a),greater<int>());
int c=0, ans=0;
for(int i = 0 ; i< k ;i++)
{
  if(c >= a[i]) break;
  c += (n - a[i]);
  ans ++;
}
 
  cout <<ans <<nl;
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
    


