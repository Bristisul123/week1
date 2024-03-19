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
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
       long sum = 0;
       for(int i =0 ;i<k;i++)
         sum+=a[i];
         long ans = sum;
        for(int i = k ;i<n;i++){
          ans += a[i]-a[i-k];
          if(ans > sum) sum = ans;
        }
        return sum;
    }
};
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
    


