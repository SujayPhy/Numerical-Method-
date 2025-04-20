#include<iostream>
using namespace std;
   float f(float x)
  {
   float g=x*x*x-x-1;
   return g;
  }
   int main()
   {
    float a,b,c;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    for (int i=1;i<=17;i++)
    {
  	 if (f(a)*f(b)<0)
	 {
  	  c=(a+b)/2;
  	  if (f(a)*f(c)>0) a=c;
  	  else b=c;
  	  cout<<"The root is="<<c<<endl;
	 }
    }
   return 0;
    }

