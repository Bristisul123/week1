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

  int n,k,sum = 0, cnt = 0; cin >>n>>k;
  vector<int>v(n);
  int a = 1, b = n;
   for(int i =0; i<n;i++)
   {
     if(v[i] != 0) break;
     if(i % 2 == 0)
     {
      for(int j =i; j < n; j+=k)
         v[j] = a++;
     }
     else {
      for(int j =i; j < n; j+=k)
           v[j] = b--;
     }
   }
      for(int i =0; i<n;i++)
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
    


