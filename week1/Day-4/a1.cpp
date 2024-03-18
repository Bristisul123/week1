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

  int n, m, i; cin>>n>>m;
    vector<int>a(n),b(m),c(m+n);
   for(i=0; i<n; i++)
    {
        cin>>a[i];
        c[i] = a[i];
    }
    int k = i;
    
    for(i=0; i<m; i++)
    {
        cin>>b[i];
        c[k] = b[i];
        k++;
    } sort(c.begin(),c.end());
   
    for(i=0; i<k; i++)
        cout<<c[i]<<" ";
    cout<<endl;

 
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
    


