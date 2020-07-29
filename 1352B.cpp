#include<iostream>
#include<cmath>

#define ll long long int
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    ll n;
    int rem,k;
    cin >> n >> k;
    ll a[k];
    rem = n%k;
    for (size_t i = 0; i < k; i++)
      a[i] = n/k;
    if(n/k==0)
    {
      cout<<"NO"<<'\n';
      continue;
    }

    if(rem==0)
      ;
    else
    {
      if(rem%2==0)
      {
        a[k-1] += rem;
      }
      else
      {
        if(n/k==1)
        {
          cout<<"NO"<<'\n';
          continue;
        }
        if(k%2!=0)
        {
          for (size_t i = 0; i < k-1; i++)
            a[i] += pow(-1,i);
          a[k-1] += rem;
        }
        else if(k%2==0)
        {
          cout<<"NO"<<'\n';
          continue;
        }
      }
    }
    cout<<"YES"<<'\n';
    for (size_t i = 0; i < k; i++)
      cout<<a[i]<<'\t';
    cout<<'\n';
  }
  return 0;
}
