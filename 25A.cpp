#include"iostream"

using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  int flag_odd;
  int flag_even;
  int n_odd=0;

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i]%2 !=0)
    {
      n_odd++;
      flag_odd = i;
    }
    else
      flag_even = i;
  }

  if(n_odd == 1)
    cout<<flag_odd+1;
  else
    cout<<flag_even+1;

  return 0;

}
