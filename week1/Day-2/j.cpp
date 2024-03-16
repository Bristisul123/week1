#include <bits/stdc++.h>
#define int long long
#define nl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

int32_t main()
{
  ios::sync_with_stdio(false);
    cin.tie(NULL);
  int n , m, c, cnt = 0; cin>>n>>m>>c;
  
  for(int i = 0;i <= c/n;i++)
  {
     for(int j = 0;j <= c/m;j++)
  {
    if((i*n + j*m) == c)
       {
        cout<<"Yes"; return 0;
       }
    }
  }
    cout<<"No";
  }
   
