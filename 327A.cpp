#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n],n_o[n],n_z[n];
  int n_ones;
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(i!=0)
    {
      n_o[i] = n_o[i-1] + a[i];
      n_z[i] = n_z[i-1] + 1 - a[i];
    }
    else
    {
      n_o[i] = a[i];
      n_z[i] = 1 - a[i];
    }
    //cout<<n_o[i]<<'\t';
  }


  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      n_ones = n_o[n-1] - (n_o[j] - n_o[i] + a[i]) + (n_z[j] - n_z[i] + 1 - a[i]);
      //cout<<i<<'\t'<<j<<'\t'<<n_ones<<'\n';
      if(n_ones>max)
        max = n_ones;
    }
  }

  cout<<max;
  return 0;
}
