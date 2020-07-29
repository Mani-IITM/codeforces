#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int

using namespace std;

void display(vector<ll> v)
{
  for(auto x:v)
    cout<<x<<' ';
  cout<<endl;
}

void missing_element(vector<ll> s,vector<ll> s1, int size_s)
{
    int i = 0;
    for(; i<size_s - 1; i++)
    {
      if(s.at(i) != s1.at(i))
        break;
    }
    cout<<s.at(i)<<endl;
}

int main()
{
  vector<ll> s,s1,s2;
  int n;
  cin>>n;

  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    s.push_back(x);
  }

  sort(s.begin(),s.end());
  //display(s);

  for(int i=0; i<n-1; i++)
  {
    ll x;
    cin>>x;
    s1.push_back(x);
  }

  sort(s1.begin(),s1.end());
  //display(s1);

  for(int i=0; i<n-2; i++)
  {
    ll x;
    cin>>x;
    s2.push_back(x);
  }

  sort(s2.begin(),s2.end());
  //display(s2);

  missing_element(s,s1,n);
  missing_element(s1,s2,n-1);

  return 0;
}
