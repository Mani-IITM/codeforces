#include<iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int i =0 ; i <t; i++)
  {
    int n,x;
    cin>>n>>x;
    int a[n];
    int n_odd = 0, n_even =0;
    for(int i=0; i < n; i++)
    {
      cin>>a[i];
      (a[i]%2 == 0)?(n_even++):(n_odd++);
    }

    if(n_odd == 0)
    {
      cout<<"No"<<'\n';
      continue;
    }
    else
    {
      if(x <= n_even + 1)
      {
        cout<<"Yes"<<'\n';
        continue;
      }
      else
      {
        if((x - n_even - 1)%2 ==0)
        {
          cout<<"Yes"<<'\n';
          continue;
        }
        else
        {
          if(n_even == 0)
          {
            cout<<"No"<<'\n';
            continue;
          }
          else
          {
            if( (x - n_even) - (n_odd - 1) <= 0)
            {
              cout<<"Yes"<<'\n';
              continue;
            }
            else
            {
              cout<<"No"<<'\n';
              continue;
            }
          }
        }
      }
    }
  }
  return 0;
}
