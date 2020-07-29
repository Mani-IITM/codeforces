#include<iostream>

using namespace std;

int check_good(int a[],int size)  // 1 if true, 0 otherwise
{
  int b=0;
  int i=0,j=size-1;
  while(i<=j)
  {
    if(a[i]<=a[j] && a[i]>=b)
    {
      b = a[i];
      i++;
    }
    else if(a[j]< a[i] && a[j]>=b)
    {
      b=a[j];
      j--;
    }
    else
    {
      return 0;
    }
  }

  return 1;
}


int main()
{
  int t;
  cin>>t;

  for(int flag=0;flag<t;flag++)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++)
      cin>>a[i];
    int l = 0;
    int r = n - 1;
    int mid = l+(r-l)/2;

    if(check_good(a,n)==1)
    {
      cout<<0<<'\n';
      goto jump;
    }

    while(true)
    {
      mid = l + (r - l) / 2;
      int sub_a[n - mid -1];
      for(int i = mid+1; i < n ; i++)
      {
        sub_a[i-mid-1]=a[i];
      }
      if(check_good(sub_a,n-mid-1)==1)
        r = mid;
      else  l = mid+1;

      if(l==r)
      {
        cout<<l+1<<'\n';
        goto jump;
      }
    }
    jump: ;
}

}
