#include<iostream>

#define ll long long int
using namespace std;

ll total_num_ways(ll n,ll r)
{
  if(r<n)
    return r*(r+1)/2;
  else
    return 1 + (n-1)*n/2;
}

int main()
{
  int t;  cin>>t;
  for(int i=0; i<t; i++) {
    ll n,r; cin>>n>>r;
    ll tot_num = total_num_ways(n,r);
    cout<<tot_num<<'\n';
  }
  return 0;
}
