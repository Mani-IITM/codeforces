#include<iostream>
using namespace std;
int main()
{
  int t;  cin >> t;
  for (int i = 0; i < t; i++) {
    int a;  cin >> a;
    (360%(180-a) == 0)?(cout<<"YES"<<'\n'):(cout<<"NO"<<'\n');
  }
  return 0;
}
