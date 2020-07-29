#include<iostream>
#include<algorithm>

#define ll long long int
using namespace std;

int main()
{
  int t;  cin>>t;
  for (size_t i = 0; i < t; i++) {

    ll n;  cin>>n;
    ll max = 1,distinct = 1,flag=1;
    ll a[n];

    for (size_t i = 0; i < n; i++) {
      cin>>a[i];
    }

    sort(a,a+n);

    for (size_t i = 1; i < n; i++) {
      //cout<<i<<'\t'<<a[i-1]<<'\t'<<a[i]<<'\t'<<max<<'\t'<<distinct<<'\n';
      if(a[i]==a[i-1]) {
        flag++;
        if(i==n-1 && flag>max)
          max = flag;
      }
      else {
        if(flag>max)
          max = flag;
        flag = 1;
        distinct++;
      }

    }
    //cout<<max<<'\t'<<distinct<<'\n';
    (max>distinct)?(cout<<distinct<<'\n'):((max==distinct)?(cout<<max-1<<'\n'):(cout<<max<<'\n'));
  }

  return 0;
}
