#include<iostream>
#include<set>
#include<utility>
#define ll long long int
#define pairs pair<ll,ll>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  set<pairs> s;

  int n;
  cin>>n;

  for( int i=0; i<n; i++)
  {
    ll a,b;
    cin>>a>>b;
    pairs x = make_pair(a,b);
    s.insert(x);
  }

  ll b_prev;
  int flag = 0;

  /*
  for(auto y:s)
    cout<<y.first<<' '<<y.second<<endl;
  */

  for(auto it= s.begin();it != s.end();it++)
  {
    pairs y = *it;
    if(it==s.begin())
      b_prev = y.second;
    else
    {
      if(y.second < b_prev)
      {
        flag = 1;
        b_prev = y.first;
      }
      else
      {
        flag = 0;
        b_prev = y.second;
      }
    }
  }

  auto it = s.rbegin();
  pairs last_pair = *it;

  if(flag == 1)
    cout<<last_pair.first<<endl;
  else
    cout<<last_pair.second<<endl;
  return 0;
}
