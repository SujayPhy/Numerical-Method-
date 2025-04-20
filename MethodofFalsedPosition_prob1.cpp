	
	#include<iostream>
	#include<cmath>
	
	using namespace std;
  	float f(float x)
    	{
  	float g = x*x*x - x - 1;
  	return g;
    	}
     	
     	int main()
     	{
  	  float a,b,c;
  	  cout<<"Enter a and b"<<endl;
  	  cin>>a>>b;
  	  
  	  int count=0;
	  while (abs(a-b)>=0.1)
  	  {
  	   if (f(a)*f(b)<0)
  	   {
  	    c=(a*f(b)-b*f(a))/(f(b)-f(a));
  	    if (f(a)*f(c)>0) a=c;
  	    else b=c;
  	    count++;
  	    cout<<"The Root is="<<c<<endl;
  	   }
	  }
	  
	  cout<<"Total number of Iteration is ="<<count<<endl;
	  return 0;
     	}
