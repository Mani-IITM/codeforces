/*

1380B

      s1,c1     s2,c2   ...     .....     ...     sn,cn      --> comparisons for pos = 1
      s2,c1     s3,c2   ...        ...   sn,cn-1  s1,cn      --> comparisons for pos = 2
      .
      .
      si,c1     ...        sn,cn-i+1     ...     sj-1,cn      --> comparisons for pos = i
      .
      .
      sn,c1     s2,c2   ...                ...     sn,cn      --> comparisons for pos = n

  The comparisons will be 1 if c1 beats s1 else 0.
  To maximize the avg win(pos),
    we need to maximize the sum of all rows, (we can remove by n factor),
    this is same as maximizing the sum of all columns,
        since each column is positive, we can use greedy algorithm.
        Find c such that sum of si,c over i is max,
        this is the same for all columns
          implies all ci's are c.
          therefore, c1c2...cn = cc...c (is one of the solns)


  To find c,
      since s belonging to {R,S,P} has only one case in which it wins,
      that is if s = R, then c = P
      hence, we can choose c such that it beats the s which occurs max times.

*/

#include<iostream>
#include<string>

using namespace std;



int main()
{
  int n; //number of test cases
  cin>>n;

  n=n+1;

  string inputs[n];

  for(int i=0;i<n;i++)
  {
    getline(cin,inputs[i]);
  }


  for(int i=0;i<n;i++)
  {
      string input;
      char c;
      input = inputs[i];
      int nR=0;
      int nS=0;
      int nP=0;

      for(int j=0;j<input.length();j++)
      {
          if(input.at(j)=='R')
          nR++;
          if(input.at(j)=='S')
          nS++;
          if(input.at(j)=='P')
          nP++;
      }

      if( nR >= nS && nR >= nP)
      c = 'P';
      if( nS >= nR && nS >= nP)
      c = 'R';
      if( nP >= nS && nP >= nR)
      c = 'S';

      for(int j=0;j<input.length();j++)
      {
          cout<<c;
      }
      cout<<"\n";
  }
  return 0;
}
