#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int flag=0;
  int a = log2(n);
  for(;a>=0;a--)
  {
    if( n - exp2(a) > 0)
    {
      flag++;
      n = n - exp2(a);
    }
    else if( n - exp2(a) == 0)
    {
      flag++;
      n = 0;
      break;
    }
    else
    {
      continue;
    }
  }

  cout<<flag;
  return 0;

}
