#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
   ll m,n; cin>>n>>m;
   multiset<ll>a;
   vector<ll>b(m);
   for(int i=0;i<n;i++){
    ll tprice;
    cin>>tprice;
    a.insert(tprice);
   }//cout<<a.size();
   for(int i=0;i<m;i++){
      cin>>b[i];
    auto it = a.upper_bound(b[i]);
    if(it == a.begin()){
      cout<<-1<<endl;
    }else {
      cout<<*(--it)<<endl;
      a.erase(it);
    }
   }
