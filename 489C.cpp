#include<iostream>

using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;

    if((m>1 && s==0) || s>9*m)
    {
        cout<<"-1 -1";
        return 0;
    }

    if(m==1 && s==0)
    {
        cout<<"0 0";
        return 0;
    }

    //max calc

    int max[m];

    for (int i = 0; i < m; i++)
    {
        if(i < s/9)
            max[i] = 9;
        else if(i == s/9)
            max[i] = s%9;
        else
            max[i] = 0;
    }


    // minimum calc

    int min[m];

    if(s/9 < (m-1))
    {
          min[0] = 1;
          for(int i=m-1;i>0;i--)
          {
              if((m-1)-i < s/9)
                  min[i] = 9;
              else if((m-1)-i == s/9)
              {
                  if(s%9 == 0)
                      {
                        min[i+1] = 8;
                        min[i]=0;
                      }
                  else
                      min[i] = s%9 - 1;
              }
              else
                  min[i] = 0;
          }
    }

    else if(s/9 == m-1)
    {
        min[0] = s%9;
        for(int i=1;i<m;i++)
        {
            min[i] = 9;
        }
    }

    else
    {
      for (int i = 0; i < m; i++) {
        min[i] = 9;
      }
    }


    // displaying result


    for(int i =0; i< m ; i++)
    {
        cout<<min[i];
    }

    cout<<"\t";

    for(int i =0; i< m ; i++)
    {
        cout<<max[i];
    }

    return 0;


}
