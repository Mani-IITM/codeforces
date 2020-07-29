#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n,a,b,c;
  cin>>n>>a>>b>>c;

  int x[] = {a,b,c};
  sort(x,x+3);
  int max =0;

  for(int i=0; i < x[0]; i++)
  {
    for(int j=0; j < x[0]; j++)
    {
      for(int k=0; k<= n/x[0]; k++)
      {
        if( i*x[2] + j*x[1] + k*x[0] == n && i + j + k > max)
        {
          max = i + j + k;
        }
        else if(i*x[2] + j*x[1] + k*x[0] > n)
        {
          break;
        }
      }
    }
  }

  cout<<max;

  return 0;


}
