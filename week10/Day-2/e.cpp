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
    int n, ans = 0; cin>>n;
    vector<int> v;
   int i = 1, j = 2;
    for(j = 2; j <= n; j+=2)
       v.push_back(j);
   for(i =1 ; i<= n; i+=2)
      v.push_back(i);

      if(n == 1 ) cout<< 1;
      else if( n < 4) cout<< "NO SOLUTION ";
      else{
   for(int i = 0; i<n;i++)
      cout<< v[i]<<" ";
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
    


