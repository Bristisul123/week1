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
    int n, x; cin>> n>> x;
    vector<pair<int,int>> v(n);
 for(int i = 0 ;i< n; i++)
 {
     cin>>v[i].first;
     v[i].second = i + 1;
 }
   sort(all(v));
   for(int i = 0; i< n; i++)
   {
     int x2 = x - v[i].first;
     for(int j = i+1 , k = n-1; j< k; j++)
     {
        while(v[j].first + v[k].first  > x2)
           k--;
 
           if(j < k  &&  v[j].first + v[k].first  == x2)
           {
             cout << v[i].second <<" "<< v[j].second << " "<< v[k].second;
             return;
           }
     }
   }
 
 cout<< "IMPOSSIBLE";
 
      
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
