#include<iostream>
#include<climits>
#define ll long long int


using namespace std;

int main()
{
  ll n;
  cin>>n;
  ll b[n];
  ll max=0,n_max=0,min=LONG_MAX,n_min=0;

  for(int i=0; i < n; i++)
  {
    cin>>b[i];
    if(b[i]>max)
    {
      max = b[i];
      n_max = 1;
    }
    else if(b[i]==max)
      n_max++;

    if(b[i]<min)
    {
      min = b[i];
      n_min = 1;
    }
    else if(b[i]==min)
      n_min++;
  }

  (max!=min)?(cout<<max-min<<"\t"<<n_min*n_max):(cout<<"0\t"<<n_max*(n_max -1)/2);

  return 0;
}
