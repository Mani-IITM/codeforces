#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

/*int bsearch(int arr[],int size,ll ele)
{
  int l=0,r=size-1;
  int mid;
  mid = l + (r-l)/2;
  if(size==1)
  {
    if(arr[0]> ele)
      return -1;
    else
      return 0;
  }
  while(r>=l)
  {
      if(arr[mid]<=ele && arr[mid+1]>ele)
      {
        return mid;
      }
      else if(arr[mid]<ele)
      {
        l = mid+1;
      }
      else if(arr[mid]>ele)
      {
        r = mid-1;
      }
      mid = l + (r-l)/2;
  }
  return -1;

}
*/
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  int q; cin>>q;
  for(int i=0;i<q;i++)
  {
    ll p;  cin>>p;
    //cout<< bsearch(a,n,p) + 1<<'\n';
    auto upper = upper_bound(a,a+n,p);
    cout<<upper-a<<'\n';

  }

  return 0;
}
