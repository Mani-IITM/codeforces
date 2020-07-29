#include<iostream>
#include<algorithm>

using namespace std;

int getIndex(int arr[], int n, int idx)
{
	int result = 0;
	for (int i = 0; i < n; i++)
  {
    if (arr[i] < arr[idx])
			result++;
		if (arr[i] == arr[idx] && i < idx)
			result++;
	}
	return result;
}

int main()
{
  int s,n;
  cin>>s>>n;

  int x[n],y[n];
  for(int i=0; i < n; i++)
      cin>>x[i]>>y[i];

  int index[n];
  for(int i=0; i<n; i++)
      index[i] = getIndex(x,n,i);

  int x_sorted[n],y_sorted[n];
  for(int i=0; i<n;i++)
  {
    x_sorted[index[i]] = x[i];
    y_sorted[index[i]] = y[i];
  }

  int i = 0;
  while (s > x_sorted[i] && i<n)
  {
    s = s + y_sorted[i];
    i++;
  }

  if(i == n)
      cout<<"YES";
  else
      cout<<"NO";

  return 0;
}
