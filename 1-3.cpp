#include<iostream>
using namespace std;
int a=10;
int main()
{
  int a=5;
  cout<<a<<"  using scop resolution operator  "<<::a;
  return 0;
}