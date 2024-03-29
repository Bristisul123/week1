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

  int n, m,sum = 0, mx = 0 ; cin>>n>>m;
  int a[n][m];
 for(int i = 0;i < n ; i++)
 {
    for(int j = 0;j < m; j++)
    cin>>a[i][j];
 }
 for(int i = 0;i < n ; i++)
 {
    for(int j = 0;j < m; j++)
    {
         sum = a[i][j];
     int row = i-1,col = j-1;
      while(row > -1 and col > -1)
        sum += a[row--][col--];
    row = i-1 , col = j+1;
       while(row > -1 and col < m)
         sum += a[row--][col++];
    row = i+1 , col = j-1; 
       while(row < n and col > -1)
         sum += a[row++][col--];
     row = i+1 , col = j+1;
        while(row <n and col < m)
         sum += a[row++][col++];
     mx = max(mx,sum);
    }
}
 cout<< mx <<nl;
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
    


