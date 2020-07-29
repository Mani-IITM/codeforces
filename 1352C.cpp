#include<iostream>

#define ll long long int
using namespace std;

int main()
{
  int t;
  cin>>t;

  for (int i = 0; i < t; i++)
  {
    ll n,k;
    cin>>n>>k;

    ll ans=k;
    while(k/n > 0)
    {
      ans += k/n;
      k = k/n + k%n;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
