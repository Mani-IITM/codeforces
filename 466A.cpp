#include<iostream>

using namespace std;

int main()
{

  int n,m,a,b;
  cin>>n>>m>>a>>b;

  if(b/m >= a)
  {
    cout<<n*a;
    return 0;
  }

  if( (n%m)*a < b)
  {
    cout<< (n/m)*b + (n%m)*a;
  }
  else
    cout<< (n/m)*b + b;

  return 0;
}
