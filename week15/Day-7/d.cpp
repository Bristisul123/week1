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

  int n,k,sum = 0, cnt = 0,x =0,y=0,ans = 0; cin >>n;
  vector<int>v(n+1);

  for(int i=1; i<=n; i++)
    cin>>v[i];
    for(int i =2; i<=n ; i++)
       {
         if(v[i] != v[1])
            cnt++, x = i;
       }
     if(cnt == 0) no;
     else{
       yes;
         for(int i =2; i<=n ; i++){
            if(v[i] != v[1]) 
              cout<< 1<<" " <<i <<nl;
          else 
                  cout<< x<<" " <<i <<nl;
         }
    

     }

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
    


