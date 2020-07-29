#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char change_case(char c)
{
  if(int(c) >=65 && int(c) <=90)
  c = tolower(c);
  else c = toupper(c);

  return c;
}

int main()
{
  string input;
  string output;
  getline(cin,input);

  output = input;

  int i = 1;
  for( ; i<input.length();i++)
  {
    if(int(input.at(i)) >=65 && int(input.at(i)) <=90)
    continue;
    else break;
  }

  if(i == input.length())
  {
    transform(input.begin(),input.end(),output.begin(),change_case);
  }

  cout<<output;

  return 0;
}
