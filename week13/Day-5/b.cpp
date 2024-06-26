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
const int N=2e5+2;


void solve()
{ 

 int n,m ,k; cin>>n>>k>>m;
 vector<int> v(N);
 while(n--){
    int l,r; cin>>l>>r;
    v[l]++;
    v[r+1]--;
 }
 for(int i = 1; i< N;i++)
    v[i] += v[i-1];
  for(int i =0 ; i<N;i++)
  {
    if(v[i] >= k) v[i] = 1;
    else v[i] = 0;
  }
  for(int i =1; i<N;i++)
    v[i] += v[i-1];

     for(int i=0; i<m; i++)
    {
       int a,b;
        cin>>a>>b;
 
        cout<<v[b]-v[a-1]<<endl;
    }
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1;// cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


