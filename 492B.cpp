#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

double maximum_3(double a,double b,double c)
{
  if(a>=b && a>=c)
  {
    return a;
  }
  else if(b>=a && b>=c)
  {
    return b;
  }
  else if(c>=a && c>=b)
  {
    return c;
  }
}

int main()
{
  long int n,l;
  cin>>n>>l;

  long int a[n];
  for (int i = 0; i <n; i++)
    cin>>a[i];

  sort(a,a+n);
  /*for(int i =0; i<n;i++)
    cout<<a[i]<<'\t';

  cout<<'\n';*/

  if(n==1)
  {
    cout<<std::setprecision(10)<<maximum_3(0,a[0],l - a[n-1]);
    return 0;
  }

  long int diff[n-1];
  for(int i=0;i<n-1;i++)
  {
      diff[i] = a[i+1] - a[i];
      //cout<<diff[i]<<'\t';
  }

  //cout<<'\n';

  sort(diff,diff + n -1);
  /*for(int i=0;i<n-1;i++)
    cout<<diff[i]<<'\t';

  cout<<'\n';*/

  cout<<std::setprecision(10)<<maximum_3((double)diff[n-2]/2,a[0],l - a[n-1]);

  return 0;
}
