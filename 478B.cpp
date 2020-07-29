#include<iostream>
#define ll long long int

using namespace std;

ll nC2(ll n)
{
  if(n<2)
    return 0;
  else
    return n*(n-1)/2;
}

int main()
{
  ll n,m;
  cin>>n>>m;
  ll kmax = nC2(n-m+1);
  ll q = n/m;
  ll r = n%m;
  ll kmin = r*nC2(q+1) + (m-r)*nC2(q);
  cout<<kmin<<'\t'<<kmax<<'\n';
}
