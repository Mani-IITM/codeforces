#include<iostream>
#include<cmath>
#include<iomanip>
#define db double

using namespace std;

void solve()
{
  db a,b;
  int d;
  cin>>d;

  // a*a - a*d + d = 0
  // a = (d +- sqrt(d*(d-4)))/2;

  a =  (d + sqrt(d*(d-4)))/2;
  b =  (d - sqrt(d*(d-4)))/2;

  if(a>=0 && b>=0)
    cout<<setprecision(15)<<"Y"<<' '<<a<<' '<<b<<endl;
  else
    cout<<"N"<<endl;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    solve();
  }

  return 0;
}
