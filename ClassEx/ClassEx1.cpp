#include<iostream>
using namespace std;

int main(){

  double a,b,c,delta;
  cin>>a>>b>>c;

  delta=b*b-4*a*c;
  if(a==0)
      cout<<"不是二次方程"<<endl;
  else if(delta==0)
      cout<<"有两个相等的实根"<<endl;

  else if(delta>0)
      cout<<"有两个不等的实根"<<endl;

  else
      cout<<"有两个共轭复根"<<endl;

  return 0;
}
