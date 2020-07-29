#include<iostream>
#include<string>

using namespace std;

void ab_finder(string input)
{
  int n=input.length();
  string a = "";
  string b = ""; // assuming a>b
  int flag=0;
  for(int i=0;i<n;i++) {
    if(input.at(i) == '2' && (i==0 || flag==0)) {
      a += '1';
      b += '1';
    }
    else if(input.at(i) == '2' && flag !=0) {
      a += '0';
      b += '2';
    }
    else if(input.at(i) == '1'&& flag == 0) {
      a += '1';
      b += '0';
      flag++;
    }
    else if(input.at(i) == '1'&& flag !=0 ) {
      a += '0';
      b += '1';
    }
    else if(input.at(i) == '0') {
      a += '0';
      b += '0';
    }
  }

  cout<<a<<'\n'<<b<<'\n';
}

int main()
{
  int t;
  cin>>t;
  for (int i = 0; i < t; i++) {
    int n;
    cin>>n;
    string input;
    cin>>input;
    ab_finder(input);
  }
  return 0;
}
