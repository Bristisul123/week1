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

  int n, a , b, j = -1; cin>>n;
  int k = (n *(n - 1))/2;
  vector<int>v(k);
  for(int i=0;i<k;i++)
       cin>>v[i];
 
   sort(all(v));
for(int i = n-1 ; i>= 0 ;i--){
     j += i;
   cout<<v[j]<<" ";
}

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
    


