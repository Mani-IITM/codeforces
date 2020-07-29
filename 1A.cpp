#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
  ll n,m,a;
  cin>>n>>m>>a;

  cout<< (ll)ceil(double(n)/a) * (ll)ceil(double(m)/a);
  return 0;
}
