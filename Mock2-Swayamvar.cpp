#include<iostream>
using namespace std;
int main()
{
  int len;
  cin>>len;
  string ammai,abbai;
  bool flag=false;
  cin>>ammai>>abbai;
  for(int i=0;i<len;i++)
  {
    char ch=ammai[i];
    if(abbai.find(ch)!=string::npos)
    {
      abbai.erase(abbai.find(ch),1);
    }
    else
    {
      cout<<abbai.length();
      flag=true;
      break;
    }
  }
  if(!flag)
  {
    cout<<"0";
  }
  return 0;
}