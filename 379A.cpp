#include<iostream>
using namespace std;
int main()
{
  int a,b; cin>>a>>b;
  int time=0;
  int rem =0;
  while(a+rem >= b)
  {
    int a1;
    //cout<< a<<'\t'<<b<<'\t'<<rem<<'\t'<<time<<'\n';
    time += a;
    a1 = (a+rem)/b;
    rem = (a+rem)%b;
    a=a1;

  }
  time += a;
  //cout<< a<<'\t'<<b<<'\t'<<rem<<'\t'<<time<<'\n';
  cout<<time;
  return 0;
}
