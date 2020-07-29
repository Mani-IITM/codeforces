#include<iostream>

#define ll long long int
using namespace std;

int main()
{
  int t;
  cin>>t;

  for (int i = 0; i < t; i++)
  {
    ll n;
    cin>>n;

    ll a[n];
    for (ll i = 0; i < n; i++)
    {
      cin>>a[i];
    }


    int possession = 0; // 0 for first, 1 for second
    for (ll i = 0; i < n-1; i++)
    {
      if(a[i]==1)
      {
        possession = 1 - possession;
      }
      else
      {
        int n_ones=0;
        for(int j=i+1; a[j]==1 && j<n-1; j++)
          n_ones++;
        if(n_ones%2 != 0)
          possession = 1 - possession;
      }
    }

    if(possession==0)
      cout<<"First"<<'\n';
    else
      cout<<"Second"<<'\n';
  }
  return 0;
}
