#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++)
    cin>>a[i];

  sort(a,a+n);

  int n_taxis = 0;


  // counting num of 1,2,3,4s

  int n1=0,n2=0,n3=0,n4=0;
  int i=0;

  while(a[i]==1)
  {
    i++;
  }

  n1 = i;

  int j=i;

  while(a[j]==2)
  {
    j++;
  }

  n2 = j-i;

  int k = j;

  while(a[k]==3)
  {
    k++;
  }

  n3 = k-j;

  n4 = n - n1 - n2- n3;

  /*
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<'\t';
  }

  cout<<'\n'<<n1<<'\t'<<n2<<'\t'<<n3<<'\t'<<n4<<'\n';
  */

  // single team 4 mem taxis
  n_taxis += n4;

  if(n1<=n3)
  {
    n_taxis += n3;
    if(n2%2==0)
    {
      n_taxis += n2/2;
    }
    else
    {
      n_taxis += n2/2 + 1;
    }
  }
  else
  {
    n_taxis += n3;
    n1 = n1 - n3;
    if(n2%2==0)
    {
      n_taxis += n2/2;
      n_taxis += n1/4;
      if(n1%4 != 0)
      {
        n_taxis++;
      }
    }
    else
    {
      n_taxis += n2/2;
      //we have n1 1 mem teams and 1 2 mem team
      n_taxis += n1/4;

      if(n1%4==3)
      {
        n_taxis += 2;
      }
      else
      {
        n_taxis++;
      }
    }
  }

  cout<<n_taxis;
  return 0;
}
