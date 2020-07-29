#include<iostream>

using namespace std;

int main()
{
  int n,m;  cin>>n>>m;
  long long int time = 0;
  int a_pre=1;  int a;

  for(int i=0;i<m;i++) {
    cin>>a;
    (a>=a_pre)?(time += a - a_pre):(time += n - (a_pre - a));
    a_pre = a;
  }

  cout<<time;
  return 0;
}
