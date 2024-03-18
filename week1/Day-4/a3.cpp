#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
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

    int n, m;
     cin>>n>>m;
      vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>> b[i];
    int l=0,r=0,  ans=0;
     while(l<n && r<m)
     {
       int cnt = 0 ,cnt2 = 0, curr = a[l];
       while(a[l] == curr && l<n)
       {
        cnt++;
        l++;
       }
       while(curr>b[r] && r<m)
        r++;
      
      while(b[r] == curr && r<m)
         {
          cnt2++;
          r++;
         }
         ans +=(cnt*cnt2);
     }
     cout<<ans ;

}
    


