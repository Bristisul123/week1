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

  int n; cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
int d = a[0], d1 = a[1];
for(int i = 0; i<n;i+=2)
    d = __gcd(d,a[i]);

for(int i = 1; i< n;i+=2)
    d1 = __gcd(d1,a[i]);

int f = 0, f1 = 0;

for(int i = 0; i<n;i+=2)
  {
     if((a[i] %d1) == 0) 
     {
        f = 1; break;
     }

  }
  for(int i = 1; i<n;i+=2)
  {
     if((a[i] % d) == 0) 
     {
        f1 = 1; break;
     }

  }
  if(f == 1 and f1 == 1) cout<< 0 <<nl;
  else if(f == 1 )  cout<< d <<nl;
  else  cout << d1 <<nl;
 
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
    


