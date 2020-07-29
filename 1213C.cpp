#include<iostream>
#define ll long long int

using namespace std;

void sum_finder(ll n,ll m)
{
  int sum10;
  if(m%10 == 0)
    sum10 = 0;
  else if(m%10 == 5)
    sum10 = 25;
  else if((m%10)%2 == 0)
    sum10 = 40;
  else
    sum10 = 45;

  ll ans = 0;
  ans += (n/m)/10 * sum10;
  //cout<<ans<<'\n';
  int iter = (n/m)%10;
  for(int i = 0; i< iter; i++)
    ans += ((i+1)*m)%10;

  cout<<ans<<"\n";
}

int main()
{
  int q;
  cin>>q;

  for( int i = 0; i < q; i++)
  {
    ll n,m;
    cin>>n>>m;
    sum_finder(n,m);
  }
  return 0;
}
