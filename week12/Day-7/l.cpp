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

  int n,sum = 0, cnt = 0; cin >>n;
  vector<int>v(n),v2;
  string a= "";
  bool f = 0;
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v2.empty())
        {
             a.push_back('1');
              v2.push_back(v[i]);
        }
       else{
        if(f) {
            if(v[i] < v2.back()) a.push_back('0');
            else
            {
                if(v[i] > v2[0]) a.push_back('0');
                else{
                    a.push_back('1');
                    v2.push_back(v[i]);
                }
            }
        }
        else{
        if(v[i] >= v2.back())
        {
            a.push_back('1');
            v2.push_back(v[i]);
        }
        else
        {
            if(v[i] > v2[0]) a.push_back('0');
            else
            {
                 f = 1;
                 a.push_back('1');
                 v2.push_back(v[i]);
            }
        }
       } 
    }
  } cout<< a<<nl;
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
    


