#include<iostream>

using namespace std;

void pair_finder()
{
  int n;
  cin>>n;

  int a[2*n];
  int a_odd[2*n];
  int a_even[2*n];
  int n_even = 0;
  int n_odd = 0;
  for(int i=0; i < 2*n; i++)
  {
    cin>>a[i];
    if(a[i]%2 == 0)
    {
      a_even[n_even] = i + 1;
      n_even++;
    }
    else
    {
      a_odd[n_odd] = i + 1;
      n_odd++;
    }
  }
  //cout<<n_even<<'\t'<<n_odd<<'\n';
  int odd_limit = n_odd;
  int even_limit = n_even;

  if(n_odd%2 != 0)
  {
    odd_limit -= 1;
    even_limit -= 1;
  }
  else
  {
    if(odd_limit !=0)
      odd_limit -= 2;
    else
      even_limit -= 2;
  }
  //cout<<even_limit<<'\t'<<odd_limit<<'\n';
  int i;
  for(i=1;i<odd_limit;i=i+2)
    cout<<a_odd[i-1]<<'\t'<<a_odd[i]<<'\n';
  for(i=1;i<even_limit;i=i+2)
    cout<<a_even[i-1]<<'\t'<<a_even[i]<<'\n';
}

int main()
{
  int t;
  cin>>t;

  for (int i = 0; i < t; i++)
  {
    pair_finder();
  }
 return 0;
}
