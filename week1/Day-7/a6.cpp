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


vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
          
   int i = 0, j = 0;
           vector<long long int> v;
           queue<long long int> q;
           
           while(i < n)
           {
               if(a[i] < 0)
                 q.push(a[i]);
            if(i-j+1 < k) i++;
            else if( i-j+1 == k)
            {
                if(q.size() == 0)
                  v.push_back(0);
                 else 
                    v.push_back(q.front());
                if(a[j] < 0)
                   q.pop();
                 i++;
                 j++;
            }
           }
            return v;
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
    


