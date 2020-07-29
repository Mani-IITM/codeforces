#include<iostream>
#include<cmath>

#define ll long long int
using namespace std;

int main()
{
  int t;  cin>>t;
  for (size_t i = 0; i < t; i++) {
    ll n; cin>>n;
    int n_py = 0;
    ll h_max = floor((-1 + sqrt(24*n +1))/6);
    //cout<<"h_max = "<<h_max<<'\n';
    while(h_max > 0 && n > 0) {
      n_py++;
      n -= h_max*(3*h_max + 1)/2;
      h_max = floor((-1 + sqrt(24*n +1))/6);
      //cout<< n_py << '\t'<< n<<'\n';
      //cout<<"h_max = "<<h_max<<'\n';
    }
    cout<<n_py<<'\n';
  }
  return 0;
}
