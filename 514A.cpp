#include<iostream>
#define ll long long int

using namespace std;

int main()
{
  ll x;
  cin >> x;
  int size =0;
  ll y =x;

  while(y!=0)
  {
    size++;
    y = y/10;
  }

  int a[size];

  for(int i=size-1; i>=0; i--)
  {
    int t = x%10;
    (t >= 5 && x!=9)?(a[i] = 9-t):(a[i] = t);
    x = x/10;
  }

  for (int i = 0; i < size; i++)
  {
    cout<<a[i];
  }
  return 0;
}
