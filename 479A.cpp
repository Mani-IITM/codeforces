#include<iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;

  int values[] ={ a+b*c , a*(b+c) , a*b*c , (a+b)*c , a+b+c, a*b + c } ;
  int max = values[0];
  for(int i =1;i<6;i++)
  {
    if(values[i]>max)
    max=values[i];
  }
  cout<<max;
  return 0;
}
