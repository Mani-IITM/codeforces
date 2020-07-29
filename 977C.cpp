#include<iostream>
#include<algorithm>

#define ll long long int
using namespace std;

int main()
{
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  if(k==0)
  {
    if(a[0]==1)
      cout<<-1;
    else
      cout<<a[0]-1;
  }
  else
  {
    if(k <= n)
    {
      if(a[k-1]!=a[k])
        cout<<a[k-1];
      else
        cout<<-1;
    }
    else
      cout<<-1;
  }
  return 0;
}
