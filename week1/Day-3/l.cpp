#include <bits/stdc++.h>
#define int long long
#define nl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

void solve() { 
  int n , m, cnt = 0; cin>>n;
   vector<int>v(n);
   for(int i =0; i<n;i++)
    cin>>v[i];
   for(int i =0; i<n;i++)
   {
     if(v[i]>i)
       cnt = max(cnt , v[i]-i-1);
   }
  cout<<cnt<<nl;
  }
   
int32_t main()
{
  ios::sync_with_stdio(false);
    cin.tie(NULL);
     int T; cin>>T;
      while(T--)
      {
          solve();
      }
      return 0;
  }