#include<iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  for( int i=0; i<t; i++)
  {
    int n;
    cin>>n;
    int p_prev = 0,c_prev =0;
    int p,c;
    int flag = 0;
    for( int i=0; i<n; i++)
    {
      cin>>p>>c;
      if(p - p_prev >= c - c_prev && c - c_prev >=0)
        flag++;
      p_prev = p;
      c_prev = c;
    }

    (flag==n)?(cout<<"YES"<<'\n'):(cout<<"NO"<<"\n");
  }
  return 0;
}
