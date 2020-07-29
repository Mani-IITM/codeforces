#include<iostream>
#include<string>

using namespace std;

int main()
{
  int t;  cin>>t;
  while(t>0)
  {
      int a[9][9];
      for(int i=0;i<9;i++)
      {
        string input;
        cin>>input;
        for(int j=0;j<9;j++)
        {
          a[i][j] = input.at(j) - 48;
          if( (i%3==0 && j<3 && i/3==j) || (i%3==1 && j<6 && 3+i/3==j) || (i%3==2 && j<9 && 6+i/3==j))
            (a[i][j]==1)?(a[i][j] += 1):(a[i][j] -= 1);
          cout<<a[i][j];
        }
      cout<<'\n';
    }
    t--;
}
return 0;
}
